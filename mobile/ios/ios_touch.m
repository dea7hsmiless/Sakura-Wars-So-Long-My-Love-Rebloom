// On-screen pad for iOS. It is a transparent UIView over SDL's window and feeds
// the runtime's touch layer; a Bluetooth controller keeps working beside it.
#import <UIKit/UIKit.h>
#include <math.h>
#include <stdio.h>

extern void rebloom_touch_button(int button, int down);
extern void rebloom_touch_stick(int which, int x, int y);
extern void rebloom_touch_trigger(int which, int value);
extern void rebloom_touch_tap(void);
extern void rebloom_touch_reset(void);

enum {
    RB_CROSS = 0, RB_CIRCLE = 1, RB_SQUARE = 2, RB_TRIANGLE = 3,
    RB_L1 = 4, RB_R1 = 5, RB_L2 = 6, RB_R2 = 7,
    RB_START = 10, RB_SELECT = 11,
    RB_UP = 12, RB_DOWN = 13, RB_LEFT = 14, RB_RIGHT = 15
};

static UIColor *RBColor(CGFloat r, CGFloat g, CGFloat b, CGFloat a) {
    return [UIColor colorWithRed:r / 255.0 green:g / 255.0 blue:b / 255.0 alpha:a];
}

@interface RebloomTouchView : UIView {
    BOOL _held[16];
}
@property(nonatomic) CGFloat dpadX, dpadY, dpadR;
@property(nonatomic) CGFloat knobX, knobY;
@property(nonatomic) CGFloat faceX, faceY, faceR, faceButtonR;
@property(nonatomic) CGFloat unit;
@property(nonatomic) CGFloat accentR, accentG, accentB, alphaScale;
@property(nonatomic) BOOL buttonHaptics, stickHaptics;
@property(nonatomic) int stickZone;
@property(nonatomic, strong) NSMutableDictionary<NSValue *, NSNumber *> *roles;
@property(nonatomic, weak) UITouch *dpadTouch;
@property(nonatomic) BOOL up, down, left, right;
@property(nonatomic) BOOL tapAdvance;
@property(nonatomic) int lastLx, lastLy;
@property(nonatomic, strong) NSMutableDictionary<NSValue *, NSValue *> *tapStarts;
@property(nonatomic, strong) NSMutableDictionary<NSValue *, NSNumber *> *tapTimes;
@end

@implementation RebloomTouchView

- (instancetype)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (!self) return nil;
    self.backgroundColor = UIColor.clearColor;
    self.opaque = NO;
    self.multipleTouchEnabled = YES;
    self.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    _roles = [NSMutableDictionary dictionary];
    _tapStarts = [NSMutableDictionary dictionary];
    _tapTimes = [NSMutableDictionary dictionary];
    const char *tap = getenv("REBLOOM_TAP");
    _tapAdvance = !tap || strcmp(tap, "0") != 0;
    const char *haptics = getenv("REBLOOM_TOUCH_HAPTICS");
    _buttonHaptics = !haptics || strcmp(haptics, "0") != 0;
    const char *stickHaptics = getenv("REBLOOM_TOUCH_STICK_HAPTICS");
    _stickHaptics = !stickHaptics || strcmp(stickHaptics, "0") != 0;
    _accentR = 232; _accentG = 196; _accentB = 106;
    const char *color = getenv("REBLOOM_TOUCH_COLOR");
    if (color && color[0] == '#') {
        unsigned int rgb = 0;
        if (sscanf(color + 1, "%x", &rgb) == 1) {
            _accentR = (rgb >> 16) & 255;
            _accentG = (rgb >> 8) & 255;
            _accentB = rgb & 255;
        }
    }
    _alphaScale = 0.7;
    const char *opacity = getenv("REBLOOM_TOUCH_OPACITY");
    if (opacity) _alphaScale = MAX(0.2, MIN(1.0, atof(opacity)));
    _lastLx = _lastLy = 128;
    _stickZone = 0;
    for (int i = 0; i < 4; i++) _held[i] = NO;
    return self;
}

- (CGFloat)alpha:(CGFloat)value { return value * self.alphaScale; }
- (UIColor *)accent:(CGFloat)alpha { return RBColor(self.accentR, self.accentG, self.accentB, [self alpha:alpha]); }
- (UIColor *)ink:(CGFloat)alpha { return RBColor(242, 236, 228, [self alpha:alpha]); }
- (UIColor *)red:(CGFloat)alpha { return RBColor(176, 58, 72, [self alpha:alpha]); }

- (BOOL)canBecomeFirstResponder { return NO; }

- (void)layoutSubviews {
    [super layoutSubviews];
    CGFloat w = self.bounds.size.width, h = self.bounds.size.height;
    self.unit = MIN(w, h);
    self.dpadX = w * 0.16;
    self.dpadY = h * 0.72;
    self.dpadR = self.unit * 0.16;
    self.knobX = self.dpadX;
    self.knobY = self.dpadY;
    self.faceX = w * 0.84;
    self.faceY = h * 0.72;
    self.faceR = self.unit * 0.125;
    self.faceButtonR = self.unit * 0.063;
    [self setNeedsDisplay];
}

- (void)drawRect:(CGRect)rect {
    CGContextRef ctx = UIGraphicsGetCurrentContext();
    if (!ctx || self.unit <= 0) return;
    CGFloat w = self.bounds.size.width, h = self.bounds.size.height;
    CGContextSetLineWidth(ctx, MAX(2.0, self.unit * 0.006));

    // analog stick: base, ring, guide and thumb knob
    CGContextSetFillColorWithColor(ctx, RBColor(8, 6, 5, [self alpha:0.37]).CGColor);
    CGContextFillEllipseInRect(ctx, CGRectMake(self.dpadX - self.dpadR, self.dpadY - self.dpadR,
                                               self.dpadR * 2, self.dpadR * 2));
    CGContextSetStrokeColorWithColor(ctx, [self accent:0.63].CGColor);
    CGContextStrokeEllipseInRect(ctx, CGRectMake(self.dpadX - self.dpadR, self.dpadY - self.dpadR,
                                                 self.dpadR * 2, self.dpadR * 2));
    CGContextSetStrokeColorWithColor(ctx, [self accent:0.28].CGColor);
    CGFloat inner = self.dpadR * 0.58;
    CGContextStrokeEllipseInRect(ctx, CGRectMake(self.dpadX - inner, self.dpadY - inner, inner * 2, inner * 2));
    for (int i = 0; i < 4; i++) {
        CGFloat a = i * M_PI / 2;
        CGContextMoveToPoint(ctx, self.dpadX + cos(a) * self.dpadR * 0.82,
                             self.dpadY + sin(a) * self.dpadR * 0.82);
        CGContextAddLineToPoint(ctx, self.dpadX + cos(a) * self.dpadR * 0.96,
                                self.dpadY + sin(a) * self.dpadR * 0.96);
    }
    CGContextSetStrokeColorWithColor(ctx, [self accent:0.38].CGColor);
    CGContextStrokePath(ctx);
    CGContextSetFillColorWithColor(ctx, [self accent:0.32].CGColor);
    CGContextFillEllipseInRect(ctx, CGRectMake(self.knobX - self.dpadR * 0.36, self.knobY - self.dpadR * 0.36,
                                               self.dpadR * 0.72, self.dpadR * 0.72));
    CGContextSetStrokeColorWithColor(ctx, [self accent:0.82].CGColor);
    CGContextStrokeEllipseInRect(ctx, CGRectMake(self.knobX - self.dpadR * 0.36, self.knobY - self.dpadR * 0.36,
                                                 self.dpadR * 0.72, self.dpadR * 0.72));

    // face buttons
    [self face:RB_CROSS x:self.faceX y:self.faceY + self.faceR];
    [self face:RB_CIRCLE x:self.faceX + self.faceR y:self.faceY];
    [self face:RB_SQUARE x:self.faceX - self.faceR y:self.faceY];
    [self face:RB_TRIANGLE x:self.faceX y:self.faceY - self.faceR];

    // shoulders and system buttons
    CGFloat small = self.unit * 0.058, small2 = self.unit * 0.05;
    [self capsule:@"L1" x:w * 0.11 y:h * 0.13 rx:small ry:small button:RB_L1];
    [self capsule:@"R1" x:w * 0.89 y:h * 0.13 rx:small ry:small button:RB_R1];
    [self capsule:@"L2" x:w * 0.11 y:h * 0.28 rx:small2 ry:small2 button:RB_L2];
    [self capsule:@"R2" x:w * 0.89 y:h * 0.28 rx:small2 ry:small2 button:RB_R2];
    [self capsule:@"SEL" x:w * 0.42 y:h * 0.07 rx:w * 0.045 ry:self.unit * 0.028 button:RB_SELECT];
    [self capsule:@"START" x:w * 0.58 y:h * 0.07 rx:w * 0.058 ry:self.unit * 0.028 button:RB_START];
}

- (void)arrowAt:(CGPoint)center rotation:(CGFloat)rotation on:(BOOL)on {
    CGContextRef ctx = UIGraphicsGetCurrentContext();
    CGFloat s = self.dpadR * 0.17;
    CGContextSaveGState(ctx);
    CGContextTranslateCTM(ctx, center.x, center.y);
    CGContextRotateCTM(ctx, rotation);
    CGContextBeginPath(ctx);
    CGContextMoveToPoint(ctx, 0, -s);
    CGContextAddLineToPoint(ctx, -s * 0.9, s * 0.7);
    CGContextAddLineToPoint(ctx, s * 0.9, s * 0.7);
    CGContextClosePath(ctx);
    CGContextSetFillColorWithColor(ctx, [self accent:(on ? 0.86 : 0.53)].CGColor);
    CGContextFillPath(ctx);
    CGContextRestoreGState(ctx);
}

- (void)face:(int)button x:(CGFloat)x y:(CGFloat)y {
    CGContextRef ctx = UIGraphicsGetCurrentContext();
    BOOL on = _held[button];
    CGContextSetFillColorWithColor(ctx, (on ? [self red:0.82] : RBColor(8, 6, 5, [self alpha:0.33])).CGColor);
    CGContextFillEllipseInRect(ctx, CGRectMake(x - self.faceButtonR, y - self.faceButtonR,
                                               self.faceButtonR * 2, self.faceButtonR * 2));
    CGContextSetStrokeColorWithColor(ctx, on ? [self ink:1].CGColor : [self accent:0.75].CGColor);
    CGContextSetLineWidth(ctx, MAX(2.0, self.unit * (on ? 0.008 : 0.006)));
    CGContextStrokeEllipseInRect(ctx, CGRectMake(x - self.faceButtonR, y - self.faceButtonR,
                                                 self.faceButtonR * 2, self.faceButtonR * 2));
    CGFloat s = self.faceButtonR * 0.48;
    CGContextSetStrokeColorWithColor(ctx, on ? [self ink:1].CGColor : [self accent:0.84].CGColor);
    CGContextBeginPath(ctx);
    if (button == RB_CROSS) {
        CGContextMoveToPoint(ctx, x - s, y - s); CGContextAddLineToPoint(ctx, x + s, y + s);
        CGContextMoveToPoint(ctx, x + s, y - s); CGContextAddLineToPoint(ctx, x - s, y + s);
        CGContextStrokePath(ctx);
    } else if (button == RB_CIRCLE) {
        CGContextStrokeEllipseInRect(ctx, CGRectMake(x - s, y - s, s * 2, s * 2));
    } else if (button == RB_SQUARE) {
        CGContextStrokeRect(ctx, CGRectMake(x - s, y - s, s * 2, s * 2));
    } else {
        CGContextMoveToPoint(ctx, x, y - s * 1.1);
        CGContextAddLineToPoint(ctx, x - s, y + s * 0.75);
        CGContextAddLineToPoint(ctx, x + s, y + s * 0.75);
        CGContextClosePath(ctx);
        CGContextStrokePath(ctx);
    }
}

- (void)capsule:(NSString *)label x:(CGFloat)x y:(CGFloat)y rx:(CGFloat)rx ry:(CGFloat)ry button:(int)button {
    CGContextRef ctx = UIGraphicsGetCurrentContext();
    BOOL on = _held[button];
    CGRect r = CGRectMake(x - rx, y - ry, rx * 2, ry * 2);
    UIBezierPath *p = [UIBezierPath bezierPathWithRoundedRect:r cornerRadius:ry * 0.8];
    [RBColor(8, 6, 5, [self alpha:0.30]) setFill];
    if (on) [[self red:0.82] setFill];
    [p fill];
    [[self accent:(on ? 1.0 : 0.68)] setStroke];
    p.lineWidth = MAX(2.0, self.unit * 0.005);
    [p stroke];
    NSDictionary *attrs = @{
        NSFontAttributeName: [UIFont boldSystemFontOfSize:ry * 0.95],
        NSForegroundColorAttributeName: on ? [self ink:1] : [self accent:1]
    };
    CGSize size = [label sizeWithAttributes:attrs];
    [label drawAtPoint:CGPointMake(x - size.width / 2, y - size.height / 2) withAttributes:attrs];
}

- (BOOL)inDpad:(CGPoint)p {
    CGFloat dx = p.x - self.dpadX, dy = p.y - self.dpadY;
    return dx * dx + dy * dy <= self.dpadR * self.dpadR * 1.75;
}

- (int)hitButton:(CGPoint)p {
    CGPoint centers[4] = {
        {self.faceX, self.faceY + self.faceR}, {self.faceX + self.faceR, self.faceY},
        {self.faceX - self.faceR, self.faceY}, {self.faceX, self.faceY - self.faceR}
    };
    for (int i = 0; i < 4; i++) {
        CGFloat dx = p.x - centers[i].x, dy = p.y - centers[i].y;
        if (sqrt(dx * dx + dy * dy) <= self.faceButtonR * 1.3) return i;
    }
    CGFloat w = self.bounds.size.width, h = self.bounds.size.height;
    CGFloat small = self.unit * 0.058, small2 = self.unit * 0.05;
    struct { CGFloat x, y, rx, ry; int id; } hits[] = {
        {w * 0.11, h * 0.13, small, small, RB_L1}, {w * 0.89, h * 0.13, small, small, RB_R1},
        {w * 0.11, h * 0.28, small2, small2, RB_L2}, {w * 0.89, h * 0.28, small2, small2, RB_R2},
        {w * 0.42, h * 0.07, w * 0.045, self.unit * 0.028, RB_SELECT},
        {w * 0.58, h * 0.07, w * 0.058, self.unit * 0.028, RB_START},
    };
    for (int i = 0; i < 6; i++)
        if (fabs(p.x - hits[i].x) <= hits[i].rx && fabs(p.y - hits[i].y) <= hits[i].ry) return hits[i].id;
    return -1;
}

- (void)press:(int)button on:(BOOL)on {
    if (button < 0 || button >= 16 || _held[button] == on) return;
    _held[button] = on;
    rebloom_touch_button(button, on ? 1 : 0);
    if (on && self.buttonHaptics) {
        UIImpactFeedbackGenerator *feedback = [[UIImpactFeedbackGenerator alloc] initWithStyle:UIImpactFeedbackStyleLight];
        [feedback impactOccurred];
    }
    [self setNeedsDisplay];
}

- (void)stickHaptic:(UIImpactFeedbackStyle)style {
    UIImpactFeedbackGenerator *feedback = [[UIImpactFeedbackGenerator alloc] initWithStyle:style];
    [feedback impactOccurred];
}

- (void)setDirection:(int)button on:(BOOL)on {
    BOOL *slot = button == RB_UP ? &_up : button == RB_DOWN ? &_down : button == RB_LEFT ? &_left : &_right;
    if (*slot == on) return;
    *slot = on;
    rebloom_touch_button(button, on ? 1 : 0);
    [self setNeedsDisplay];
}

- (void)moveStick:(CGPoint)p {
    CGFloat dx = p.x - self.dpadX, dy = p.y - self.dpadY;
    CGFloat len = sqrt(dx * dx + dy * dy);
    CGFloat dead = self.dpadR * 0.16;
    CGFloat nx = 0, ny = 0;
    if (len > dead) {
        CGFloat amount = MIN(1.0, (len - dead) / (self.dpadR - dead));
        nx = dx / len * amount;
        ny = dy / len * amount;
    }
    CGFloat reach = self.dpadR * 0.62;
    self.knobX = self.dpadX + nx * reach;
    self.knobY = self.dpadY + ny * reach;
    int lx = (int)lround(128 + nx * 127);
    int ly = (int)lround(128 + ny * 127);
    if (lx != self.lastLx || ly != self.lastLy) {
        self.lastLx = lx;
        self.lastLy = ly;
        rebloom_touch_stick(0, lx, ly);
    }
    CGFloat threshold = 0.55;
    [self setDirection:RB_UP on:ny < -threshold];
    [self setDirection:RB_DOWN on:ny > threshold];
    [self setDirection:RB_LEFT on:nx < -threshold];
    [self setDirection:RB_RIGHT on:nx > threshold];

    if (self.stickHaptics) {
        int zone = len < dead ? 0 : len < self.dpadR * 0.88 ? 1 : 2;
        if (zone != self.stickZone) {
            if (zone == 1) [self stickHaptic:UIImpactFeedbackStyleLight];
            else if (zone == 2) [self stickHaptic:UIImpactFeedbackStyleMedium];
            self.stickZone = zone;
        }
    }
    [self setNeedsDisplay];
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    for (UITouch *touch in touches) {
        CGPoint p = [touch locationInView:self];
        NSValue *key = [NSValue valueWithNonretainedObject:touch];
        if (!self.dpadTouch && [self inDpad:p]) {
            self.dpadTouch = touch;
            self.roles[key] = @(-1);
            [self moveStick:p];
            continue;
        }
        int button = [self hitButton:p];
        if (button >= 0) {
            self.roles[key] = @(button);
            [self press:button on:YES];
        } else {
            self.roles[key] = @(-2);
            if (self.tapAdvance) {
                self.tapStarts[key] = [NSValue valueWithCGPoint:p];
                self.tapTimes[key] = @(touch.timestamp);
            }
        }
    }
}

- (void)touchesMoved:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    for (UITouch *touch in touches)
        if (touch == self.dpadTouch) [self moveStick:[touch locationInView:self]];
}

- (void)releaseTouch:(UITouch *)touch {
    NSValue *key = [NSValue valueWithNonretainedObject:touch];
    NSNumber *role = self.roles[key];
    [self.roles removeObjectForKey:key];
    if (!role) return;
    int value = role.intValue;
    if (value == -1) {
        if (self.dpadTouch == touch) self.dpadTouch = nil;
        self.up = self.down = self.left = self.right = NO;
        rebloom_touch_button(RB_UP, 0); rebloom_touch_button(RB_DOWN, 0);
        rebloom_touch_button(RB_LEFT, 0); rebloom_touch_button(RB_RIGHT, 0);
        self.lastLx = self.lastLy = 128;
        self.stickZone = 0;
        self.knobX = self.dpadX;
        self.knobY = self.dpadY;
        rebloom_touch_stick(0, 128, 128);
        [self setNeedsDisplay];
    } else if (value >= 0) {
        [self press:value on:NO];
    } else if (value == -2 && self.tapAdvance) {
        NSValue *start = self.tapStarts[key];
        NSNumber *when = self.tapTimes[key];
        [self.tapStarts removeObjectForKey:key];
        [self.tapTimes removeObjectForKey:key];
        if (start && when) {
            CGPoint p = [touch locationInView:self];
            CGPoint s = start.CGPointValue;
            CGFloat dx = p.x - s.x, dy = p.y - s.y;
            if (touch.timestamp - when.doubleValue <= 0.35 && dx * dx + dy * dy <= 22 * 22)
                rebloom_touch_tap();
        }
    }
}

- (void)touchesEnded:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    for (UITouch *touch in touches) [self releaseTouch:touch];
}

- (void)touchesCancelled:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    [self resetState];
}

- (void)resetState {
    [self.roles removeAllObjects];
    [self.tapStarts removeAllObjects];
    [self.tapTimes removeAllObjects];
    self.dpadTouch = nil;
    self.up = self.down = self.left = self.right = NO;
    for (int i = 0; i < 16; i++) _held[i] = NO;
    self.lastLx = self.lastLy = 128;
    self.stickZone = 0;
    self.knobX = self.dpadX;
    self.knobY = self.dpadY;
    rebloom_touch_reset();
    [self setNeedsDisplay];
}

@end

static const NSInteger kTouchTag = 0x5242544F;  // RBTO

void rebloom_touch_install(void) {
    dispatch_async(dispatch_get_main_queue(), ^{
        UIWindow *window = nil;
        for (UIScene *scene in UIApplication.sharedApplication.connectedScenes) {
            if (![scene isKindOfClass:UIWindowScene.class]) continue;
            for (UIWindow *candidate in ((UIWindowScene *)scene).windows) {
                if (candidate.isKeyWindow) { window = candidate; break; }
                if (!window) window = candidate;
            }
            if (window.isKeyWindow) break;
        }
        if (!window) window = UIApplication.sharedApplication.windows.firstObject;
        UIView *root = window.rootViewController.view;
        if (!root || [root viewWithTag:kTouchTag]) return;
        RebloomTouchView *view = [[RebloomTouchView alloc] initWithFrame:root.bounds];
        view.tag = kTouchTag;
        [root addSubview:view];
        fprintf(stderr, "[touch] on-screen pad installed (%s)\n",
                [NSThread isMainThread] ? "main thread" : "other thread");
    });
}

void rebloom_touch_remove(void) {
    dispatch_async(dispatch_get_main_queue(), ^{
        for (UIScene *scene in UIApplication.sharedApplication.connectedScenes) {
            if (![scene isKindOfClass:UIWindowScene.class]) continue;
            for (UIWindow *window in ((UIWindowScene *)scene).windows)
                [[window.rootViewController.view viewWithTag:kTouchTag] removeFromSuperview];
        }
    });
}
