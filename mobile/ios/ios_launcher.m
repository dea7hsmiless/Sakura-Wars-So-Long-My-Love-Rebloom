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
static void ExcludeFromBackup(NSString *path) {
    NSURL *u = [NSURL fileURLWithPath:path];
    [u setResourceValue:@YES forKey:NSURLIsExcludedFromBackupKey error:nil];
}

static NSString *LookName(NSString *value) {
    NSArray *names = @[@"Crisp", @"Crisp + edges", @"Soft", @"Soft + edges", @"Sharp", @"Sharp + edges"];
    NSInteger i = value.integerValue;
    return (i >= 0 && i < (NSInteger)names.count) ? names[i] : names[5];
}
static NSString *NextLook(NSString *value) {
    NSInteger i = (value.integerValue + 1) % 6;
    return [NSString stringWithFormat:@"%ld", (long)i];
}

@interface RebloomLauncher : UIViewController <UIDocumentPickerDelegate>
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
    b.titleLabel.font = [UIFont boldSystemFontOfSize:15];
    b.contentEdgeInsets = UIEdgeInsetsMake(10, 16, 10, 16);
    [b addTarget:self action:action forControlEvents:UIControlEventTouchUpInside];
    [b.heightAnchor constraintGreaterThanOrEqualToConstant:44].active = YES;
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

- (UIStackView *)row:(NSString *)title value:(UIButton *)value {
    UIStackView *row = [[UIStackView alloc] initWithArrangedSubviews:@[
        [self label:title size:15 bold:NO color:RGB(0xF2ECE4)],
        [UIView new],
        value
    ]];
    row.axis = UILayoutConstraintAxisHorizontal;
    row.alignment = UIStackViewAlignmentCenter;
    row.spacing = 10;
    return row;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = RGB(0x120D0B);
    LoadSettings();
    g_active = self;
    [NSFileManager.defaultManager createDirectoryAtPath:DiscsDir() withIntermediateDirectories:YES attributes:nil error:nil];
    [NSFileManager.defaultManager createDirectoryAtPath:GameData() withIntermediateDirectories:YES attributes:nil error:nil];

    self.scroll = [UIScrollView new];
    self.scroll.alwaysBounceVertical = YES;
    self.scroll.translatesAutoresizingMaskIntoConstraints = NO;
    [self.view addSubview:self.scroll];

    self.stack = [UIStackView new];
    self.stack.axis = UILayoutConstraintAxisVertical;
    self.stack.spacing = 14;
    self.stack.translatesAutoresizingMaskIntoConstraints = NO;
    [self.scroll addSubview:self.stack];

    UILayoutGuide *safe = self.view.safeAreaLayoutGuide;
    [NSLayoutConstraint activateConstraints:@[
        [self.scroll.topAnchor constraintEqualToAnchor:safe.topAnchor],
        [self.scroll.leadingAnchor constraintEqualToAnchor:safe.leadingAnchor],
        [self.scroll.trailingAnchor constraintEqualToAnchor:safe.trailingAnchor],
        [self.scroll.bottomAnchor constraintEqualToAnchor:safe.bottomAnchor],
        [self.stack.topAnchor constraintEqualToAnchor:self.scroll.contentLayoutGuide.topAnchor constant:22],
        [self.stack.leadingAnchor constraintEqualToAnchor:self.scroll.contentLayoutGuide.leadingAnchor constant:28],
        [self.stack.trailingAnchor constraintEqualToAnchor:self.scroll.contentLayoutGuide.trailingAnchor constant:-28],
        [self.stack.bottomAnchor constraintEqualToAnchor:self.scroll.contentLayoutGuide.bottomAnchor constant:-22],
        [self.stack.widthAnchor constraintEqualToAnchor:self.scroll.frameLayoutGuide.widthAnchor constant:-56]
    ]];

    UILabel *brand = [self label:@"REBLOOM" size:30 bold:YES color:RGB(0xE8C46A)];
    UILabel *sub = [self label:@"SAKURA WARS V  /  SO LONG, MY LOVE" size:10 bold:YES color:RGB(0xA99C8E)];
    [self.stack addArrangedSubview:brand];
    [self.stack addArrangedSubview:sub];

    UIView *discCard = [self card];
    UIStackView *discStack = [[UIStackView alloc] init];
    discStack.axis = UILayoutConstraintAxisVertical;
    discStack.spacing = 8;
    discStack.translatesAutoresizingMaskIntoConstraints = NO;
    [discCard addSubview:discStack];
    [NSLayoutConstraint activateConstraints:@[
        [discStack.topAnchor constraintEqualToAnchor:discCard.topAnchor constant:16],
        [discStack.leadingAnchor constraintEqualToAnchor:discCard.leadingAnchor constant:16],
        [discStack.trailingAnchor constraintEqualToAnchor:discCard.trailingAnchor constant:-16],
        [discStack.bottomAnchor constraintEqualToAnchor:discCard.bottomAnchor constant:-16]
    ]];
    [discStack addArrangedSubview:[self label:@"DISC" size:10 bold:YES color:RGB(0xA99C8E)]];
    self.discLabel = [self label:@"No disc imported yet" size:17 bold:YES color:RGB(0xF2ECE4)];
    [discStack addArrangedSubview:self.discLabel];
    self.discDetail = [self label:@"Import your own Disc 1 ISO to begin." size:12 bold:NO color:RGB(0xA99C8E)];
    [discStack addArrangedSubview:self.discDetail];
    UIStackView *actions = [[UIStackView alloc] initWithArrangedSubviews:@[
        [self button:@"Play" action:@selector(playPressed) primary:YES],
        [self button:@"Import disc..." action:@selector(chooseDisc) primary:NO]
    ]];
    actions.axis = UILayoutConstraintAxisHorizontal;
    actions.spacing = 10;
    [discStack addArrangedSubview:actions];
    self.progress = [[UIProgressView alloc] initWithProgressViewStyle:UIProgressViewStyleDefault];
    self.progress.hidden = YES;
    [discStack addArrangedSubview:self.progress];
    [self.stack addArrangedSubview:discCard];

    UIView *voiceCard = [self card];
    UIStackView *voiceStack = [[UIStackView alloc] init];
    voiceStack.axis = UILayoutConstraintAxisVertical;
    voiceStack.spacing = 8;
    voiceStack.translatesAutoresizingMaskIntoConstraints = NO;
    [voiceCard addSubview:voiceStack];
    [NSLayoutConstraint activateConstraints:@[
        [voiceStack.topAnchor constraintEqualToAnchor:voiceCard.topAnchor constant:16],
        [voiceStack.leadingAnchor constraintEqualToAnchor:voiceCard.leadingAnchor constant:16],
        [voiceStack.trailingAnchor constraintEqualToAnchor:voiceCard.trailingAnchor constant:-16],
        [voiceStack.bottomAnchor constraintEqualToAnchor:voiceCard.bottomAnchor constant:-16]
    ]];
    [voiceStack addArrangedSubview:[self label:@"VOICE LANGUAGE" size:10 bold:YES color:RGB(0xA99C8E)]];
    self.language = [[UISegmentedControl alloc] initWithItems:@[@"English (Disc 1)", @"Japanese (Disc 2)"]];
    self.language.selectedSegmentIndex = [Language() isEqual:@"jp"] ? 1 : 0;
    [self.language addTarget:self action:@selector(languageChanged) forControlEvents:UIControlEventValueChanged];
    [voiceStack addArrangedSubview:self.language];
    [voiceStack addArrangedSubview:[self label:@"Japanese voices require importing Disc 2. Import both discs to switch freely." size:11 bold:NO color:RGB(0xA99C8E)]];
    [self.stack addArrangedSubview:voiceCard];

    UIView *settingsCard = [self card];
    UIStackView *settings = [[UIStackView alloc] init];
    settings.axis = UILayoutConstraintAxisVertical;
    settings.spacing = 10;
    settings.translatesAutoresizingMaskIntoConstraints = NO;
    [settingsCard addSubview:settings];
    [NSLayoutConstraint activateConstraints:@[
        [settings.topAnchor constraintEqualToAnchor:settingsCard.topAnchor constant:16],
        [settings.leadingAnchor constraintEqualToAnchor:settingsCard.leadingAnchor constant:16],
        [settings.trailingAnchor constraintEqualToAnchor:settingsCard.trailingAnchor constant:-16],
        [settings.bottomAnchor constraintEqualToAnchor:settingsCard.bottomAnchor constant:-16]
    ]];
    [settings addArrangedSubview:[self label:@"SETTINGS (APPLIED NEXT LAUNCH)" size:10 bold:YES color:RGB(0xA99C8E)]];
    self.dedither = [self button:@"" action:@selector(toggleDedither) primary:NO];
    self.look = [self button:@"" action:@selector(cycleLook) primary:NO];
    self.aspect = [self button:@"" action:@selector(toggleAspect) primary:NO];
    self.deinterlace = [self button:@"" action:@selector(toggleDeinterlace) primary:NO];
    self.scale = [self button:@"" action:@selector(cycleScale) primary:NO];
    [settings addArrangedSubview:[self row:@"De-dither" value:self.dedither]];
    [settings addArrangedSubview:[self row:@"Picture look" value:self.look]];
    [settings addArrangedSubview:[self row:@"Aspect" value:self.aspect]];
    [settings addArrangedSubview:[self row:@"Deinterlace" value:self.deinterlace]];
    [settings addArrangedSubview:[self row:@"Render scale" value:self.scale]];
    [self.stack addArrangedSubview:settingsCard];

    self.status = [self label:@"" size:12 bold:NO color:RGB(0xA99C8E)];
    [self.stack addArrangedSubview:self.status];
    [self refresh];

    if (g_pendingURL) [self acceptISO:g_pendingURL];
}

- (void)refresh {
    NSString *disc = DiscFor(Language());
    self.discLabel.text = disc ? disc.lastPathComponent : @"No disc imported yet";
    self.discDetail.text = disc
        ? ([Language() isEqual:@"jp"] ? @"Japanese voices (Disc 2)" : @"English voices (Disc 1)")
        : @"Import your own Disc 1 ISO to begin.";
    self.play.enabled = disc != nil;
    self.play.alpha = disc ? 1.0 : 0.45;
    [self.dedither setTitle:([Get(@"dedither", @"1") isEqual:@"1"] ? @"On (soften)" : @"Off") forState:UIControlStateNormal];
    [self.look setTitle:LookName(Get(@"look", @"5")) forState:UIControlStateNormal];
    [self.aspect setTitle:([Get(@"aspect", @"4:3") isEqual:@"16:9"] ? @"16:9 (stretch)" : @"4:3 (original)") forState:UIControlStateNormal];
    [self.deinterlace setTitle:([Get(@"deinterlace", @"blend") isEqual:@"off"] ? @"Off (sharp)" : @"Blend") forState:UIControlStateNormal];
    [self.scale setTitle:([Get(@"scale", @"") isEqual:@"2"] ? @"2x" : @"1x (native)") forState:UIControlStateNormal];
    self.status.text = self.busy ? self.status.text : [NSString stringWithFormat:@"Ready  /  iOS arm64  /  Rebloom %s", REBLOOM_VERSION];
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
    Set(@"look", NextLook(Get(@"look", @"5")));
    [self refresh];
}
- (void)toggleAspect {
    Set(@"aspect", [Get(@"aspect", @"4:3") isEqual:@"4:3"] ? @"16:9" : @"4:3");
    [self refresh];
}
- (void)toggleDeinterlace {
    Set(@"deinterlace", [Get(@"deinterlace", @"blend") isEqual:@"off"] ? @"blend" : @"off");
    [self refresh];
}
- (void)cycleScale {
    Set(@"scale", [Get(@"scale", @"") isEqual:@"2"] ? @"" : @"2");
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
                    self.language.selectedSegmentIndex = [Language() isEqual:@"jp"] ? 1 : 0;
                    self.status.text = [NSString stringWithFormat:@"Imported %@", name];
                } else {
                    self.status.text = @"Import failed";
                    [self alert:@"The disc image could not be copied. Check free space and try again."];
                }
                [self refresh];
            });
        }
    });
}

- (void)playPressed {
    NSString *disc = DiscFor(Language());
    if (!disc) { [self chooseDisc]; return; }
    if (self.busy) return;
    NSString *data = GameData();
    [NSFileManager.defaultManager createDirectoryAtPath:data withIntermediateDirectories:YES attributes:nil error:nil];
    NSString *memcard = [data stringByAppendingPathComponent:([Language() isEqual:@"jp"] ? @"play-japanese.ps2" : @"play-english.ps2")];
    NSMutableArray<NSString *> *args = [NSMutableArray arrayWithObjects:
        @"SakuraWarsV", @"--disc", disc, @"--game-dir", data, @"--memcard", memcard, @"--window", nil];
    (void)args;
    g_arguments = args;

    setenv("PS2_LOOK", Get(@"look", @"5").UTF8String, 1);
    setenv("PS2_ASPECT", Get(@"aspect", @"4:3").UTF8String, 1);
    setenv("PS2_PRESENT_MODE", "fifo", 1);
    setenv("PS2_WINDOW_TITLE", "Sakura Wars V: So Long, My Love - Rebloom", 1);
    if ([Get(@"deinterlace", @"blend") isEqual:@"off"]) setenv("PS2_NO_DEINTERLACE", "1", 1);
    if ([Get(@"scale", @"") isEqual:@"2"]) setenv("PS2_SCALE", "2", 1);
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
