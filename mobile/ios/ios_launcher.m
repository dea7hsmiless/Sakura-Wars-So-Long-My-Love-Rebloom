#import <UIKit/UIKit.h>
#import <UniformTypeIdentifiers/UniformTypeIdentifiers.h>
#import <QuartzCore/QuartzCore.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#import "ios_launcher.h"

#ifndef REBLOOM_VERSION
#define REBLOOM_VERSION "0.1"
#endif

static UIColor *RGB(int hex) {
    return [UIColor colorWithRed:((hex >> 16) & 255) / 255.0
                           green:((hex >> 8) & 255) / 255.0
                            blue:(hex & 255) / 255.0 alpha:1.0];
}
static NSString *Docs(void) {
    return NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES).firstObject;
}
static NSString *DiscsDir(void) { return [Docs() stringByAppendingPathComponent:@"discs"]; }
static NSString *GameData(void) { return [Docs() stringByAppendingPathComponent:@"game-data"]; }
static NSString *IniPath(void) { return [Docs() stringByAppendingPathComponent:@"rebloom.ini"]; }
static NSString *ShaderPath(void) {
    return [NSBundle.mainBundle.bundlePath stringByAppendingPathComponent:@"game/blit-dedither.wgsl"];
}
static BOOL Exists(NSString *p) { return p && [NSFileManager.defaultManager fileExistsAtPath:p]; }

static NSMutableDictionary *g_settings;
static NSMutableArray<NSString *> *g_arguments;
static char **g_argv;
static int g_argc;

static void LoadSettings(void) {
    g_settings = [NSMutableDictionary dictionary];
    NSString *raw = [NSString stringWithContentsOfFile:IniPath() encoding:NSUTF8StringEncoding error:nil];
    for (NSString *line in [raw componentsSeparatedByCharactersInSet:NSCharacterSet.newlineCharacterSet]) {
        NSRange r = [line rangeOfString:@"="];
        if (r.location == NSNotFound || [line hasPrefix:@"#"] || [line hasPrefix:@";"]) continue;
        NSString *k = [[line substringToIndex:r.location] stringByTrimmingCharactersInSet:NSCharacterSet.whitespaceCharacterSet];
        NSString *v = [[line substringFromIndex:r.location + 1] stringByTrimmingCharactersInSet:NSCharacterSet.whitespaceCharacterSet];
        if (k.length) g_settings[k] = v;
    }
}
static NSString *Get(NSString *key, NSString *fallback) {
    NSString *v = g_settings[key];
    return v.length ? v : fallback;
}
static void SaveSettings(void) {
    NSMutableString *out = [NSMutableString stringWithString:@"; Sakura Wars V launcher settings\n"];
    for (NSString *k in g_settings) [out appendFormat:@"%@=%@\n", k, g_settings[k]];
    [out writeToFile:IniPath() atomically:YES encoding:NSUTF8StringEncoding error:nil];
}
static void Set(NSString *key, NSString *value) {
    g_settings[key] = value;
    SaveSettings();
}

static NSString *NameLanguage(NSString *path) {
    NSString *n = path.lastPathComponent.lowercaseString;
    if ([n containsString:@"disc 2"] || [n containsString:@"disc2"] || [n containsString:@"japanese"]) return @"jp";
    if ([n containsString:@"disc 1"] || [n containsString:@"disc1"] || [n containsString:@"english"]) return @"en";
    return @"";
}
static NSString *SerialLanguage(NSString *path) {
    NSFileHandle *fh = [NSFileHandle fileHandleForReadingAtPath:path];
    if (!fh) return @"";
    NSData *head = [fh readDataOfLength:4 << 20];
    [fh closeFile];
    if (!head) return @"";
    NSString *text = [[NSString alloc] initWithData:head encoding:NSISOLatin1StringEncoding];
    if ([text containsString:@"SLUS_219.27"]) return @"en";
    if ([text containsString:@"SLUS_219.30"]) return @"jp";
    return @"";
}
static NSString *DiscFor(NSString *lang) {
    NSArray<NSString *> *names = [NSFileManager.defaultManager contentsOfDirectoryAtPath:DiscsDir() error:nil];
    NSMutableArray<NSString *> *isos = [NSMutableArray array];
    for (NSString *n in names) if ([n.pathExtension.lowercaseString isEqual:@"iso"]) [isos addObject:n];
    [isos sortUsingSelector:@selector(localizedCaseInsensitiveCompare:)];
    NSArray<NSString *> *prefer = [lang isEqual:@"jp"] ? @[@"disc 2", @"disc2", @"japanese"] : @[@"disc 1", @"disc1", @"english"];
    for (NSString *want in prefer)
        for (NSString *iso in isos)
            if ([iso.lowercaseString containsString:want]) return [DiscsDir() stringByAppendingPathComponent:iso];
    if (isos.count == 1 && NameLanguage(isos[0]).length == 0) return [DiscsDir() stringByAppendingPathComponent:isos[0]];
    NSString *stored = Get([lang isEqual:@"jp"] ? @"disc_jp" : @"disc_en", @"");
    if (stored.length && Exists(stored)) return stored;
    return nil;
}
static NSString *Language(void) { return Get(@"language", @"en"); }
static unsigned long long FreeBytes(NSString *path) {
    NSNumber *n = nil;
    [[NSURL fileURLWithPath:path] getResourceValue:&n forKey:NSURLVolumeAvailableCapacityForImportantUsageKey error:nil];
    return n.unsignedLongLongValue;
}
static NSString *LookName(NSString *value) {
    NSArray *names = @[@"Crisp", @"Crisp + edges", @"Soft", @"Soft + edges", @"Sharp", @"Sharp + edges"];
    NSInteger i = value.integerValue;
    return (i >= 0 && i < (NSInteger)names.count) ? names[i] : names[1];
}
static NSString *NextLook(NSString *value) {
    NSInteger i = (value.integerValue + 1) % 6;
    return [NSString stringWithFormat:@"%ld", (long)i];
}
static NSString *ScaleName(NSString *value) {
    if ([value isEqual:@"1"]) return @"1x (native)";
    if ([value isEqual:@"3"]) return @"3x";
    if ([value isEqual:@"2"]) return @"2x";
    return @"3x";
}
static NSString *NextScale(NSString *value) {
    if ([value isEqual:@"2"]) return @"3";
    if ([value isEqual:@"3"] || value.length == 0) return @"1";
    return @"2";
}

@interface RebloomLauncher : UIViewController <UIDocumentPickerDelegate>
@property(nonatomic, strong) UIStackView *rail;
@property(nonatomic, strong) NSLayoutConstraint *railWidthConstraint;
@property(nonatomic, strong) UIStackView *navStack;
@property(nonatomic, copy) NSString *page;
@property(nonatomic, strong) UILabel *heading;
@property(nonatomic, strong) UILabel *subheading;
@property(nonatomic, strong) UIScrollView *scroll;
@property(nonatomic, strong) UIStackView *stack;
@property(nonatomic, strong) UILabel *status;
@property(nonatomic, strong) UILabel *discLabel;
@property(nonatomic, strong) UILabel *discDetail;
@property(nonatomic, strong) UIButton *play;
@property(nonatomic, strong) UIButton *dedither;
@property(nonatomic, strong) UIButton *look;
@property(nonatomic, strong) UIButton *aspect;
@property(nonatomic, strong) UIButton *deinterlace;
@property(nonatomic, strong) UIButton *scale;
@property(nonatomic, strong) UIButton *touch;
@property(nonatomic, strong) UIButton *tapAdvance;
@property(nonatomic, strong) UISegmentedControl *language;
@property(nonatomic, strong) UIProgressView *progress;
@property(nonatomic, strong) NSURL *pendingISO;
@property(nonatomic) BOOL done;
@property(nonatomic) BOOL started;
@property(nonatomic) BOOL busy;
- (void)acceptISO:(NSURL *)url;
@end

static __weak RebloomLauncher *g_active;
static NSURL *g_pendingURL;
static NSArray<NSString *> *g_pages;

void ios_launcher_receive_url(void *nsurl) {
    NSURL *url = (__bridge NSURL *)nsurl;
    if (!url || ![url.pathExtension.lowercaseString isEqual:@"iso"]) return;
    g_pendingURL = url;
    dispatch_async(dispatch_get_main_queue(), ^{
        if (g_active) [g_active acceptISO:url];
    });
}

@implementation RebloomLauncher

- (UIInterfaceOrientationMask)supportedInterfaceOrientations { return UIInterfaceOrientationMaskLandscape; }
- (BOOL)prefersStatusBarHidden { return YES; }

- (UILabel *)label:(NSString *)text size:(CGFloat)size bold:(BOOL)bold color:(UIColor *)color {
    UILabel *l = [UILabel new];
    l.text = text;
    l.font = bold ? [UIFont boldSystemFontOfSize:size] : [UIFont systemFontOfSize:size];
    l.textColor = color;
    l.numberOfLines = 0;
    return l;
}

- (UIButton *)button:(NSString *)title action:(SEL)action primary:(BOOL)primary {
    UIButton *b = [UIButton buttonWithType:UIButtonTypeSystem];
    b.backgroundColor = RGB(primary ? 0xB03A48 : 0x2A201B);
    b.layer.cornerRadius = 9;
    b.layer.borderColor = RGB(0x3E2D24).CGColor;
    b.layer.borderWidth = primary ? 0 : 1;
    [b setTitle:title forState:UIControlStateNormal];
    [b setTitleColor:RGB(0xF2ECE4) forState:UIControlStateNormal];
    b.titleLabel.font = [UIFont boldSystemFontOfSize:14];
    b.contentEdgeInsets = UIEdgeInsetsMake(9, 14, 9, 14);
    [b addTarget:self action:action forControlEvents:UIControlEventTouchUpInside];
    [b.heightAnchor constraintGreaterThanOrEqualToConstant:46].active = YES;
    return b;
}

- (UIView *)card {
    UIView *v = [UIView new];
    v.backgroundColor = RGB(0x221914);
    v.layer.cornerRadius = 12;
    v.layer.borderColor = RGB(0x3E2D24).CGColor;
    v.layer.borderWidth = 1;
    return v;
}

- (UIStackView *)cardStack:(UIView *)card spacing:(CGFloat)spacing {
    UIStackView *s = [[UIStackView alloc] init];
    s.axis = UILayoutConstraintAxisVertical;
    s.spacing = spacing;
    s.translatesAutoresizingMaskIntoConstraints = NO;
    [card addSubview:s];
    [NSLayoutConstraint activateConstraints:@[
        [s.topAnchor constraintEqualToAnchor:card.topAnchor constant:16],
        [s.leadingAnchor constraintEqualToAnchor:card.leadingAnchor constant:16],
        [s.trailingAnchor constraintEqualToAnchor:card.trailingAnchor constant:-16],
        [s.bottomAnchor constraintEqualToAnchor:card.bottomAnchor constant:-16]
    ]];
    return s;
}

- (UIStackView *)row:(NSString *)title value:(UIButton *)value {
    UIStackView *row = [[UIStackView alloc] initWithArrangedSubviews:@[
        [self label:title size:14 bold:NO color:RGB(0xF2ECE4)],
        [UIView new],
        value
    ]];
    row.axis = UILayoutConstraintAxisHorizontal;
    row.alignment = UIStackViewAlignmentCenter;
    row.spacing = 10;
    return row;
}

- (UIButton *)navButton:(NSString *)title {
    UIButton *b = [UIButton buttonWithType:UIButtonTypeSystem];
    b.contentHorizontalAlignment = UIControlContentHorizontalAlignmentLeft;
    b.contentEdgeInsets = UIEdgeInsetsMake(0, 10, 0, 10);
    b.layer.cornerRadius = 8;
    [b setTitle:title forState:UIControlStateNormal];
    b.titleLabel.font = [UIFont boldSystemFontOfSize:15];
    [b addTarget:self action:@selector(nav:) forControlEvents:UIControlEventTouchUpInside];
    [b.heightAnchor constraintEqualToConstant:41].active = YES;
    return b;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = RGB(0x120D0B);
    LoadSettings();
    g_active = self;
    g_pages = @[@"Play", @"Install", @"Settings", @"Support", @"About"];
    self.page = @"Play";
    [NSFileManager.defaultManager createDirectoryAtPath:DiscsDir() withIntermediateDirectories:YES attributes:nil error:nil];
    [NSFileManager.defaultManager createDirectoryAtPath:GameData() withIntermediateDirectories:YES attributes:nil error:nil];

    UIView *rail = [UIView new];
    rail.backgroundColor = RGB(0x0C0908);
    rail.translatesAutoresizingMaskIntoConstraints = NO;
    [self.view addSubview:rail];
    UILayoutGuide *safe = self.view.safeAreaLayoutGuide;
    self.railWidthConstraint = [rail.widthAnchor constraintEqualToConstant:126];
    [NSLayoutConstraint activateConstraints:@[
        [rail.leadingAnchor constraintEqualToAnchor:self.view.leadingAnchor],
        [rail.topAnchor constraintEqualToAnchor:self.view.topAnchor],
        [rail.bottomAnchor constraintEqualToAnchor:self.view.bottomAnchor],
        self.railWidthConstraint,
    ]];

    UIStackView *railStack = [[UIStackView alloc] init];
    railStack.axis = UILayoutConstraintAxisVertical;
    railStack.spacing = 4;
    railStack.translatesAutoresizingMaskIntoConstraints = NO;
    [rail addSubview:railStack];
    [NSLayoutConstraint activateConstraints:@[
        [railStack.topAnchor constraintEqualToAnchor:safe.topAnchor constant:16],
        [railStack.leadingAnchor constraintEqualToAnchor:rail.leadingAnchor constant:9],
        [railStack.trailingAnchor constraintEqualToAnchor:rail.trailingAnchor constant:-9],
        [railStack.bottomAnchor constraintEqualToAnchor:safe.bottomAnchor constant:-8],
    ]];

    UIImage *railLogo = [UIImage imageNamed:@"rail-logo"];
    if (railLogo) {
        UIImageView *logo = [[UIImageView alloc] initWithImage:railLogo];
        logo.contentMode = UIViewContentModeScaleAspectFit;
        [logo.heightAnchor constraintEqualToConstant:42].active = YES;
        [railStack addArrangedSubview:logo];
    } else {
        [railStack addArrangedSubview:[self label:@"REBLOOM" size:20 bold:YES color:RGB(0xE8C46A)]];
        [railStack addArrangedSubview:[self label:@"SAKURA WARS V" size:7 bold:YES color:RGB(0xA99C8E)]];
    }
    UIView *gap = [UIView new];
    [gap.heightAnchor constraintEqualToConstant:8].active = YES;
    [railStack addArrangedSubview:gap];

    self.navStack = [UIStackView new];
    self.navStack.axis = UILayoutConstraintAxisVertical;
    self.navStack.spacing = 0;
    [self.navStack setContentHuggingPriority:1 forAxis:UILayoutConstraintAxisVertical];
    for (NSUInteger i = 0; i < g_pages.count; i++) {
        if (i == 3) {
            UIView *spacer = [UIView new];
            [spacer setContentHuggingPriority:1 forAxis:UILayoutConstraintAxisVertical];
            [self.navStack addArrangedSubview:spacer];
        }
        UIButton *button = [self navButton:g_pages[i]];
        [self.navStack addArrangedSubview:button];
        [self.navStack setCustomSpacing:(i == 2 ? 0 : 8) afterView:button];
    }
    [railStack addArrangedSubview:self.navStack];

    UIView *pane = [UIView new];
    pane.translatesAutoresizingMaskIntoConstraints = NO;
    [self.view addSubview:pane];
    [NSLayoutConstraint activateConstraints:@[
        [pane.leadingAnchor constraintEqualToAnchor:rail.trailingAnchor constant:22],
        [pane.trailingAnchor constraintEqualToAnchor:safe.trailingAnchor constant:-22],
        [pane.topAnchor constraintEqualToAnchor:safe.topAnchor constant:18],
        [pane.bottomAnchor constraintEqualToAnchor:safe.bottomAnchor],
    ]];

    self.heading = [self label:@"" size:24 bold:YES color:RGB(0xF2ECE4)];
    self.subheading = [self label:@"" size:10 bold:NO color:RGB(0xA99C8E)];
    [pane addSubview:self.heading];
    [pane addSubview:self.subheading];
    self.scroll = [UIScrollView new];
    self.scroll.alwaysBounceVertical = YES;
    self.scroll.translatesAutoresizingMaskIntoConstraints = NO;
    [pane addSubview:self.scroll];
    self.status = [self label:@"" size:10 bold:NO color:RGB(0xA99C8E)];
    self.status.backgroundColor = RGB(0x1A120F);
    self.status.translatesAutoresizingMaskIntoConstraints = NO;
    [pane addSubview:self.status];

    [NSLayoutConstraint activateConstraints:@[
        [self.heading.topAnchor constraintEqualToAnchor:pane.topAnchor],
        [self.heading.leadingAnchor constraintEqualToAnchor:pane.leadingAnchor],
        [self.heading.trailingAnchor constraintEqualToAnchor:pane.trailingAnchor],
        [self.subheading.topAnchor constraintEqualToAnchor:self.heading.bottomAnchor constant:3],
        [self.subheading.leadingAnchor constraintEqualToAnchor:pane.leadingAnchor],
        [self.subheading.trailingAnchor constraintEqualToAnchor:pane.trailingAnchor],
        [self.scroll.topAnchor constraintEqualToAnchor:self.subheading.bottomAnchor constant:12],
        [self.scroll.leadingAnchor constraintEqualToAnchor:pane.leadingAnchor],
        [self.scroll.trailingAnchor constraintEqualToAnchor:pane.trailingAnchor],
        [self.scroll.bottomAnchor constraintEqualToAnchor:self.status.topAnchor constant:-8],
        [self.status.leadingAnchor constraintEqualToAnchor:pane.leadingAnchor],
        [self.status.trailingAnchor constraintEqualToAnchor:pane.trailingAnchor],
        [self.status.bottomAnchor constraintEqualToAnchor:pane.bottomAnchor],
        [self.status.heightAnchor constraintEqualToConstant:25],
    ]];

    self.stack = [UIStackView new];
    self.stack.axis = UILayoutConstraintAxisVertical;
    self.stack.spacing = 14;
    self.stack.translatesAutoresizingMaskIntoConstraints = NO;
    [self.scroll addSubview:self.stack];
    [NSLayoutConstraint activateConstraints:@[
        [self.stack.topAnchor constraintEqualToAnchor:self.scroll.contentLayoutGuide.topAnchor],
        [self.stack.leadingAnchor constraintEqualToAnchor:self.scroll.contentLayoutGuide.leadingAnchor],
        [self.stack.trailingAnchor constraintEqualToAnchor:self.scroll.contentLayoutGuide.trailingAnchor],
        [self.stack.bottomAnchor constraintEqualToAnchor:self.scroll.contentLayoutGuide.bottomAnchor constant:-8],
        [self.stack.widthAnchor constraintEqualToAnchor:self.scroll.frameLayoutGuide.widthAnchor],
    ]];

    [self render];
    if (g_pendingURL) [self acceptISO:g_pendingURL];
}

- (void)nav:(UIButton *)sender {
    if (self.busy) return;
    self.page = sender.currentTitle;
    [self render];
}

- (void)viewDidLayoutSubviews {
    [super viewDidLayoutSubviews];
    CGFloat rail = self.view.bounds.size.width < 800 ? 126 : 160;
    if (self.railWidthConstraint.constant != rail) self.railWidthConstraint.constant = rail;
}

- (void)render {
    for (UIView *v in [self.stack.arrangedSubviews copy]) {
        [self.stack removeArrangedSubview:v];
        [v removeFromSuperview];
    }
    self.discLabel = nil;
    self.discDetail = nil;
    self.play = nil;
    self.dedither = nil;
    self.look = nil;
    self.aspect = nil;
    self.deinterlace = nil;
    self.scale = nil;
    self.touch = nil;
    self.tapAdvance = nil;
    self.language = nil;
    self.progress = nil;

    for (UIButton *b in self.navStack.arrangedSubviews) {
        BOOL on = [b.currentTitle isEqual:self.page];
        b.backgroundColor = on ? RGB(0x221914) : UIColor.clearColor;
        b.layer.borderWidth = on ? 1 : 0;
        b.layer.borderColor = RGB(0x3E2D24).CGColor;
        [b setTitleColor:on ? RGB(0xE8C46A) : RGB(0xA99C8E) forState:UIControlStateNormal];
    }

    if ([self.page isEqual:@"Play"]) [self pagePlay];
    else if ([self.page isEqual:@"Install"]) [self pageInstall];
    else if ([self.page isEqual:@"Settings"]) [self pageSettings];
    else if ([self.page isEqual:@"Support"]) [self pageSupport];
    else [self pageAbout];
    [self refresh];
}

- (void)head:(NSString *)title subtitle:(NSString *)subtitle {
    self.heading.text = title;
    self.subheading.text = subtitle;
}

- (void)pagePlay {
    UIImage *bannerImage = [UIImage imageNamed:@"play-banner"];
    if (bannerImage) {
        UIImageView *banner = [[UIImageView alloc] initWithImage:bannerImage];
        banner.contentMode = UIViewContentModeScaleAspectFill;
        banner.clipsToBounds = YES;
        banner.layer.cornerRadius = 10;
        [banner.heightAnchor constraintEqualToAnchor:banner.widthAnchor
                                          multiplier:bannerImage.size.height / bannerImage.size.width].active = YES;
        [self.stack addArrangedSubview:banner];
    }
    [self head:@"Play" subtitle:@"Your own discs, recompiled for this device. Nothing is uploaded."];
    UIView *discCard = [self card];
    UIStackView *disc = [self cardStack:discCard spacing:8];
    [disc addArrangedSubview:[self label:@"DISC" size:9 bold:YES color:RGB(0xA99C8E)]];
    self.discLabel = [self label:@"" size:16 bold:YES color:RGB(0xF2ECE4)];
    self.discDetail = [self label:@"" size:11 bold:NO color:RGB(0xA99C8E)];
    [disc addArrangedSubview:self.discLabel];
    [disc addArrangedSubview:self.discDetail];
    self.play = [self button:@"Play" action:@selector(playPressed) primary:YES];
    UIStackView *actions = [[UIStackView alloc] initWithArrangedSubviews:@[
        self.play, [self button:@"Import disc..." action:@selector(chooseDisc) primary:NO]
    ]];
    actions.axis = UILayoutConstraintAxisHorizontal;
    actions.spacing = 10;
    [disc addArrangedSubview:actions];
    self.progress = [[UIProgressView alloc] initWithProgressViewStyle:UIProgressViewStyleDefault];
    self.progress.hidden = YES;
    [disc addArrangedSubview:self.progress];
    [self.stack addArrangedSubview:discCard];

    UIView *voiceCard = [self card];
    UIStackView *voice = [self cardStack:voiceCard spacing:8];
    [voice addArrangedSubview:[self label:@"VOICE LANGUAGE" size:9 bold:YES color:RGB(0xA99C8E)]];
    self.language = [[UISegmentedControl alloc] initWithItems:@[@"English (Disc 1)", @"Japanese (Disc 2)"]];
    self.language.selectedSegmentIndex = [Language() isEqual:@"jp"] ? 1 : 0;
    [self.language addTarget:self action:@selector(languageChanged) forControlEvents:UIControlEventValueChanged];
    [voice addArrangedSubview:self.language];
    [voice addArrangedSubview:[self label:@"Japanese voices require importing Disc 2. Import both discs to switch freely."
                                     size:11 bold:NO color:RGB(0xA99C8E)]];
    [self.stack addArrangedSubview:voiceCard];

    UIView *touchCard = [self card];
    UIStackView *touchStack = [self cardStack:touchCard spacing:6];
    [touchStack addArrangedSubview:[self label:@"TOUCH AND CONTROLLERS" size:9 bold:YES color:RGB(0xA99C8E)]];
    [touchStack addArrangedSubview:[self label:([Get(@"touch", @"1") isEqual:@"1"]
        ? @"The on-screen pad is shown during play. Settings -> Controls changes it."
        : @"The on-screen pad is off. Settings -> Controls turns it on.")
        size:12 bold:NO color:RGB(0xF2ECE4)]];
    [touchStack addArrangedSubview:[self label:@"A Bluetooth controller works at the same time: pair it in iOS Settings > Bluetooth."
        size:10 bold:NO color:RGB(0xA99C8E)]];
    [self.stack addArrangedSubview:touchCard];
}

- (void)pageInstall {
    [self head:@"Install" subtitle:@"Import a copy of your own disc. The ISO is copied into app storage."];
    UIView *one = [self card];
    UIStackView *s1 = [self cardStack:one spacing:8];
    [s1 addArrangedSubview:[self label:@"DISC 1 (ENGLISH)" size:9 bold:YES color:RGB(0xA99C8E)]];
    [s1 addArrangedSubview:[self label:@"Choose a plain .iso. The launcher copies it into discs/ and checks the serial. "
        "The file you imported from can be deleted afterwards." size:12 bold:NO color:RGB(0xF2ECE4)]];
    [s1 addArrangedSubview:[self button:@"Import disc..." action:@selector(chooseDisc) primary:YES]];
    [self.stack addArrangedSubview:one];

    UIView *two = [self card];
    UIStackView *s2 = [self cardStack:two spacing:8];
    [s2 addArrangedSubview:[self label:@"DISC 2 (JAPANESE)" size:9 bold:YES color:RGB(0xA99C8E)]];
    [s2 addArrangedSubview:[self label:@"Import Disc 2 as well for Japanese voices. The voice switch is on the Play page."
        size:12 bold:NO color:RGB(0xF2ECE4)]];
    [s2 addArrangedSubview:[self button:@"Import Disc 2..." action:@selector(chooseDisc) primary:NO]];
    [self.stack addArrangedSubview:two];

    UIView *three = [self card];
    UIStackView *s3 = [self cardStack:three spacing:6];
    [s3 addArrangedSubview:[self label:@"STORAGE" size:9 bold:YES color:RGB(0xA99C8E)]];
    [s3 addArrangedSubview:[self label:[NSString stringWithFormat:@"Free space: %.1f GB\nFolder: %@",
        FreeBytes(DiscsDir()) / 1e9, DiscsDir()] size:10 bold:NO color:RGB(0xA99C8E)]];
    [self.stack addArrangedSubview:three];
}

- (void)pageSettings {
    [self head:@"Settings" subtitle:@"Changes apply on the next game launch."];
    UIView *display = [self card];
    UIStackView *d = [self cardStack:display spacing:10];
    [d addArrangedSubview:[self label:@"DISPLAY" size:10 bold:YES color:RGB(0xE8C46A)]];
    self.aspect = [self button:@"" action:@selector(toggleAspect) primary:NO];
    self.scale = [self button:@"" action:@selector(cycleScale) primary:NO];
    [d addArrangedSubview:[self row:@"Aspect" value:self.aspect]];
    [d addArrangedSubview:[self row:@"Internal resolution" value:self.scale]];
    [self.stack addArrangedSubview:display];

    UIView *graphics = [self card];
    UIStackView *g = [self cardStack:graphics spacing:10];
    [g addArrangedSubview:[self label:@"GRAPHICS" size:10 bold:YES color:RGB(0xE8C46A)]];
    self.look = [self button:@"" action:@selector(cycleLook) primary:NO];
    self.deinterlace = [self button:@"" action:@selector(toggleDeinterlace) primary:NO];
    [g addArrangedSubview:[self row:@"Picture look" value:self.look]];
    [g addArrangedSubview:[self row:@"Deinterlace" value:self.deinterlace]];
    [self.stack addArrangedSubview:graphics];

    UIView *controls = [self card];
    UIStackView *c = [self cardStack:controls spacing:8];
    [c addArrangedSubview:[self label:@"CONTROLS" size:10 bold:YES color:RGB(0xE8C46A)]];
    self.touch = [self button:@"" action:@selector(toggleTouch) primary:NO];
    [c addArrangedSubview:[self row:@"Touch controls" value:self.touch]];
    self.tapAdvance = [self button:@"" action:@selector(toggleTapAdvance) primary:NO];
    [c addArrangedSubview:[self row:@"Tap to advance" value:self.tapAdvance]];
    [c addArrangedSubview:[self label:@"On: a short tap on an empty part of the screen sends Cross, which advances dialogue. "
        "Keyboard and gamepad bindings live in game-data/keys.ini and gamepad.ini. "
        "A Bluetooth controller uses the standard mapping and works beside the touch pad." size:10 bold:NO color:RGB(0xA99C8E)]];
    [self.stack addArrangedSubview:controls];

    UIView *advanced = [self card];
    UIStackView *a = [self cardStack:advanced spacing:8];
    [a addArrangedSubview:[self label:@"ADVANCED" size:10 bold:YES color:RGB(0xE8C46A)]];
    self.dedither = [self button:@"" action:@selector(toggleDedither) primary:NO];
    [a addArrangedSubview:[self row:@"De-dither" value:self.dedither]];
    [a addArrangedSubview:[self button:@"Clear game cache" action:@selector(clearCache) primary:NO]];
    [a addArrangedSubview:[self label:@"Removes logs, states and translated-code caches. Memory cards are kept."
        size:10 bold:NO color:RGB(0xA99C8E)]];
    [self.stack addArrangedSubview:advanced];
}

- (void)pageSupport {
    [self head:@"Support" subtitle:@"What the launcher did, and where things are. Nothing is uploaded."];
    UIView *diag = [self card];
    UIStackView *d = [self cardStack:diag spacing:8];
    [d addArrangedSubview:[self label:@"DIAGNOSTICS" size:9 bold:YES color:RGB(0xA99C8E)]];
    NSString *disc = DiscFor(Language());
    [d addArrangedSubview:[self label:[NSString stringWithFormat:
        @"Rebloom %s / iOS arm64\ndisc: %@\nlanguage: %@\ntouch: %@\nfolder: %@",
        REBLOOM_VERSION, disc ? disc.lastPathComponent : @"none", [Language() isEqual:@"jp"] ? @"Japanese" : @"English",
        [Get(@"touch", @"1") isEqual:@"1"] ? @"on" : @"off", GameData()]
        size:11 bold:NO color:RGB(0xF2ECE4)]];
    [d addArrangedSubview:[self button:@"Share diagnostics" action:@selector(shareDiagnostics) primary:NO]];
    [self.stack addArrangedSubview:diag];

    UIView *pad = [self card];
    UIStackView *p = [self cardStack:pad spacing:6];
    [p addArrangedSubview:[self label:@"CONTROLLERS" size:9 bold:YES color:RGB(0xA99C8E)]];
    [p addArrangedSubview:[self label:@"Pair a Bluetooth controller in iOS Settings > Bluetooth before or during play. "
        "The game opens it automatically. Settings -> Controls turns the on-screen pad on or off."
        size:11 bold:NO color:RGB(0xF2ECE4)]];
    [self.stack addArrangedSubview:pad];
}

- (void)pageAbout {
    [self head:@"About" subtitle:[NSString stringWithFormat:@"Rebloom %s", REBLOOM_VERSION]];
    UIView *card = [self card];
    UIStackView *s = [self cardStack:card spacing:10];
    [s addArrangedSubview:[self label:@"Sakura Wars V: So Long, My Love - Rebloom" size:15 bold:YES color:RGB(0xF2ECE4)]];
    [s addArrangedSubview:[self label:@"A native iOS build made by static recompilation. No emulator, no BIOS; "
        "the game's own code is translated ahead of time.\n\n"
        "This package contains the port only. You need your own discs; no game data is included or uploaded.\n\n"
        "Rebloom is a fan project. Sakura Wars is a trademark of SEGA. Launcher design follows the ReDUB launcher's model."
        size:11 bold:NO color:RGB(0xA99C8E)]];
    [self.stack addArrangedSubview:card];

    UIView *version = [self card];
    UIStackView *v = [self cardStack:version spacing:4];
    [v addArrangedSubview:[self label:@"VERSION" size:9 bold:YES color:RGB(0xA99C8E)]];
    [v addArrangedSubview:[self label:@REBLOOM_VERSION size:14 bold:YES color:RGB(0xE8C46A)]];
    [self.stack addArrangedSubview:version];
}

- (void)refresh {
    NSString *disc = DiscFor(Language());
    self.discLabel.text = disc ? disc.lastPathComponent : @"No disc imported yet";
    self.discDetail.text = disc
        ? ([Language() isEqual:@"jp"] ? @"Japanese voices (Disc 2)" : @"English voices (Disc 1)")
        : @"Import your own Disc 1 ISO to begin.";
    self.play.enabled = disc != nil;
    self.play.alpha = disc ? 1.0 : 0.45;
    [self.play setTitle:(disc ? @"Play" : @"Import") forState:UIControlStateNormal];
    [self.dedither setTitle:([Get(@"dedither", @"1") isEqual:@"1"] ? @"On (temporal)" : @"Off") forState:UIControlStateNormal];
    [self.look setTitle:LookName(Get(@"look", @"1")) forState:UIControlStateNormal];
    [self.aspect setTitle:([Get(@"aspect", @"16:9") isEqual:@"16:9"] ? @"16:9 (stretch)" : @"4:3 (original)") forState:UIControlStateNormal];
    [self.deinterlace setTitle:([Get(@"deinterlace", @"off") isEqual:@"off"] ? @"Off (sharp)" : @"Blend") forState:UIControlStateNormal];
    [self.scale setTitle:ScaleName(Get(@"scale", @"3")) forState:UIControlStateNormal];
    [self.touch setTitle:([Get(@"touch", @"1") isEqual:@"1"] ? @"On (on-screen pad)" : @"Off") forState:UIControlStateNormal];
    [self.tapAdvance setTitle:([Get(@"tap_advance", @"1") isEqual:@"1"] ? @"On (tap the screen)" : @"Off") forState:UIControlStateNormal];
    if (!self.busy) {
        self.status.text = [NSString stringWithFormat:@"  %@  /  %@  /  %@  /  %@x  /  touch %@  /  Rebloom %s",
            disc ? @"Ready" : @"No disc", [Language() isEqual:@"jp"] ? @"Japanese voices" : @"English voices",
            Get(@"aspect", @"16:9"), Get(@"scale", @"3"),
            [Get(@"touch", @"1") isEqual:@"1"] ? @"on" : @"off", REBLOOM_VERSION];
    }
}

- (void)languageChanged {
    Set(@"language", self.language.selectedSegmentIndex == 1 ? @"jp" : @"en");
    [self refresh];
}
- (void)toggleDedither {
    Set(@"dedither", [Get(@"dedither", @"1") isEqual:@"1"] ? @"0" : @"1");
    [self refresh];
}
- (void)cycleLook {
    Set(@"look", NextLook(Get(@"look", @"1")));
    [self refresh];
}
- (void)toggleAspect {
    Set(@"aspect", [Get(@"aspect", @"16:9") isEqual:@"16:9"] ? @"4:3" : @"16:9");
    [self refresh];
}
- (void)toggleDeinterlace {
    Set(@"deinterlace", [Get(@"deinterlace", @"off") isEqual:@"off"] ? @"blend" : @"off");
    [self refresh];
}
- (void)cycleScale {
    Set(@"scale", NextScale(Get(@"scale", @"3")));
    [self refresh];
}
- (void)toggleTouch {
    Set(@"touch", [Get(@"touch", @"1") isEqual:@"1"] ? @"0" : @"1");
    [self render];
}
- (void)toggleTapAdvance {
    Set(@"tap_advance", [Get(@"tap_advance", @"1") isEqual:@"1"] ? @"0" : @"1");
    [self refresh];
}

- (void)alert:(NSString *)message {
    UIAlertController *a = [UIAlertController alertControllerWithTitle:@"Rebloom" message:message preferredStyle:UIAlertControllerStyleAlert];
    [a addAction:[UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDefault handler:nil]];
    [self presentViewController:a animated:YES completion:nil];
}

- (void)chooseDisc {
    UTType *type = [UTType typeWithFilenameExtension:@"iso"] ?: UTTypeData;
    UIDocumentPickerViewController *picker = [[UIDocumentPickerViewController alloc] initForOpeningContentTypes:@[type] asCopy:YES];
    picker.delegate = self;
    picker.allowsMultipleSelection = NO;
    [self presentViewController:picker animated:YES completion:nil];
}
- (void)documentPicker:(UIDocumentPickerViewController *)controller didPickDocumentsAtURLs:(NSArray<NSURL *> *)urls {
    [self acceptISO:urls.firstObject];
}
- (void)acceptISO:(NSURL *)url {
    if (!url || ![url.pathExtension.lowercaseString isEqual:@"iso"]) {
        [self alert:@"Choose a plain .iso disc image."];
        return;
    }
    self.pendingISO = url;
    [self importDisc];
}
- (void)importDisc {
    if (self.busy || !self.pendingISO) return;
    NSURL *url = self.pendingISO;
    NSString *name = url.lastPathComponent;
    NSString *target = [DiscsDir() stringByAppendingPathComponent:name];
    BOOL scoped = [url startAccessingSecurityScopedResource];
    NSDictionary *attr = [NSFileManager.defaultManager attributesOfItemAtPath:url.path error:nil];
    unsigned long long total = [attr[NSFileSize] unsignedLongLongValue];
    if (total > 0 && FreeBytes(DiscsDir()) < total + (128ull << 20)) {
        if (scoped) [url stopAccessingSecurityScopedResource];
        [self alert:[NSString stringWithFormat:@"Not enough free space. Needed about %.1f GB.", (total + (128ull << 20)) / 1e9]];
        return;
    }
    self.busy = YES;
    self.progress.hidden = NO;
    self.progress.progress = 0;
    self.status.text = [NSString stringWithFormat:@"Importing %@...", name];
    dispatch_async(dispatch_get_global_queue(QOS_CLASS_USER_INITIATED, 0), ^{
        @autoreleasepool {
            NSFileManager *fm = NSFileManager.defaultManager;
            [fm createDirectoryAtPath:DiscsDir() withIntermediateDirectories:YES attributes:nil error:nil];
            NSString *part = [target stringByAppendingString:@".part"];
            [fm removeItemAtPath:part error:nil];
            [fm createFileAtPath:part contents:nil attributes:nil];
            NSFileHandle *in = [NSFileHandle fileHandleForReadingAtPath:url.path];
            NSFileHandle *out = [NSFileHandle fileHandleForWritingAtPath:part];
            unsigned long long done = 0;
            BOOL ok = in != nil && out != nil;
            while (ok) {
                @autoreleasepool {
                    NSData *chunk = [in readDataOfLength:1 << 20];
                    if (!chunk.length) break;
                    [out writeData:chunk];
                    done += chunk.length;
                    if (done / (16 << 20) != (done - chunk.length) / (16 << 20)) {
                        float p = total ? (float)((double)done / (double)total) : 0;
                        dispatch_async(dispatch_get_main_queue(), ^{ self.progress.progress = p; });
                    }
                }
            }
            [in closeFile];
            [out closeFile];
            ok = ok && done == total && total > 0;
            if (ok) {
                [fm removeItemAtPath:target error:nil];
                ok = [fm moveItemAtPath:part toPath:target error:nil];
            }
            if (!ok) [fm removeItemAtPath:part error:nil];
            if (scoped) [url stopAccessingSecurityScopedResource];
            NSString *lang = ok ? SerialLanguage(target) : @"";
            if (ok && !lang.length) lang = NameLanguage(name);
            if (ok && !lang.length) lang = Language();
            if (ok) {
                Set([lang isEqual:@"jp"] ? @"disc_jp" : @"disc_en", target);
                if (![lang isEqual:Language()]) Set(@"language", lang);
            }
            dispatch_async(dispatch_get_main_queue(), ^{
                self.busy = NO;
                self.progress.hidden = YES;
                self.pendingISO = nil;
                if (ok) {
                    self.status.text = [NSString stringWithFormat:@"Imported %@", name];
                } else {
                    [self alert:@"The disc image could not be copied. Check free space and try again."];
                }
                [self render];
            });
        }
    });
}

- (void)clearCache {
    NSFileManager *fm = NSFileManager.defaultManager;
    for (NSString *name in @[@"logs", @"states", @"vu1-live", @"ee-live", @"cache"]) {
        [fm removeItemAtPath:[GameData() stringByAppendingPathComponent:name] error:nil];
    }
    [self alert:@"Game cache cleared. Memory cards were kept."];
    [self render];
}

- (void)shareDiagnostics {
    NSString *disc = DiscFor(Language());
    NSString *text = [NSString stringWithFormat:@"Rebloom %s / iOS arm64\ndisc: %@\nlanguage: %@\ntouch: %@\nfolder: %@",
        REBLOOM_VERSION, disc ? disc : @"none", Language(), Get(@"touch", @"1"), GameData()];
    UIActivityViewController *share = [[UIActivityViewController alloc] initWithActivityItems:@[text] applicationActivities:nil];
    share.popoverPresentationController.sourceView = self.view;
    share.popoverPresentationController.sourceRect = CGRectMake(self.view.bounds.size.width / 2, self.view.bounds.size.height / 2, 1, 1);
    [self presentViewController:share animated:YES completion:nil];
}

- (void)playPressed {
    NSString *disc = DiscFor(Language());
    if (!disc) { [self chooseDisc]; return; }
    if (self.busy) return;
    NSString *data = GameData();
    [NSFileManager.defaultManager createDirectoryAtPath:data withIntermediateDirectories:YES attributes:nil error:nil];
    NSString *memcard = [data stringByAppendingPathComponent:([Language() isEqual:@"jp"] ? @"play-japanese.ps2" : @"play-english.ps2")];
    g_arguments = [NSMutableArray arrayWithObjects:
        @"SakuraWarsV", @"--disc", disc, @"--game-dir", data, @"--memcard", memcard, @"--window", nil];

    setenv("PS2_LOOK", Get(@"look", @"1").UTF8String, 1);
    setenv("PS2_ASPECT", Get(@"aspect", @"16:9").UTF8String, 1);
    setenv("PS2_PRESENT_MODE", "fifo", 1);
    setenv("PS2_WINDOW_TITLE", "Sakura Wars V: So Long, My Love - Rebloom", 1);
    setenv("REBLOOM_TOUCH", [Get(@"touch", @"1") isEqual:@"1"] ? "1" : "0", 1);
    setenv("REBLOOM_TAP", [Get(@"tap_advance", @"1") isEqual:@"1"] ? "1" : "0", 1);
    NSString *db = [NSBundle.mainBundle pathForResource:@"gamecontrollerdb" ofType:@"txt"];
    if (db.length) setenv("SDL_GAMECONTROLLERCONFIG_FILE", db.fileSystemRepresentation, 1);
    if ([Get(@"deinterlace", @"off") isEqual:@"off"]) setenv("PS2_NO_DEINTERLACE", "1", 1);
    NSString *scale = Get(@"scale", @"3");
    if (scale.length) setenv("PS2_SCALE", scale.UTF8String, 1);
    if ([Get(@"dedither", @"1") isEqual:@"1"] && Exists(ShaderPath()))
        setenv("PS2_BLIT_SHADER", ShaderPath().fileSystemRepresentation, 1);
    [UIApplication sharedApplication].idleTimerDisabled = YES;
    self.started = YES;
    self.done = YES;
}
@end

int ios_launcher_run(void) {
    @autoreleasepool {
        UIWindowScene *scene = nil;
        for (UIScene *candidate in UIApplication.sharedApplication.connectedScenes) {
            if (![candidate isKindOfClass:UIWindowScene.class]) continue;
            scene = (UIWindowScene *)candidate;
            if (candidate.activationState == UISceneActivationStateForegroundActive) break;
        }
        if (!scene) {
            fprintf(stderr, "[ios] no connected UIWindowScene for the launcher\n");
            return 0;
        }
        fprintf(stderr, "[ios] presenting Rebloom launcher\n");
        UIWindow *previous = scene.keyWindow;
        UIWindow *window = [[UIWindow alloc] initWithWindowScene:scene];
        window.windowLevel = UIWindowLevelNormal + 1;
        RebloomLauncher *vc = [RebloomLauncher new];
        window.rootViewController = vc;
        [window makeKeyAndVisible];
        while (!vc.done) {
            @autoreleasepool { [NSRunLoop.currentRunLoop runUntilDate:[NSDate dateWithTimeIntervalSinceNow:0.01]]; }
        }
        window.hidden = YES;
        window.rootViewController = nil;
        previous.hidden = YES;
        g_active = nil;
        if (!vc.started) return 0;

        if (g_argv) {
            for (int i = 0; i < g_argc; ++i) free(g_argv[i]);
            free(g_argv);
            g_argv = NULL;
            g_argc = 0;
        }
        g_argc = (int)g_arguments.count;
        g_argv = calloc((size_t)g_argc + 1, sizeof(char *));
        for (int i = 0; i < g_argc; ++i) g_argv[i] = strdup(g_arguments[i].UTF8String);
        fprintf(stderr, "[ios] launcher finished; starting the runner\n");
        return 1;
    }
}
int ios_launcher_argc(void) { return g_argc; }
char **ios_launcher_argv(void) { return g_argv; }
