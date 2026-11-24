#import <UIKit/UIKit.h>
#include <stdio.h>
#include <stdlib.h>
#include "SDL.h"
#include "ios_launcher.h"

// The patched SDL delegate calls this before UIApplicationMain. Keep the
// startup and runtime lines in Documents so a device log can be read from
// Files even when no debugger is attached.
void ios_diagnostics_start(void) {
    NSString *doc = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES).firstObject;
    [NSFileManager.defaultManager createDirectoryAtPath:doc withIntermediateDirectories:YES attributes:nil error:nil];
    NSString *log = [doc stringByAppendingPathComponent:@"rebloom.log"];
    freopen(log.fileSystemRepresentation, "a", stderr);
    setvbuf(stderr, NULL, _IONBF, 0);
    fprintf(stderr, "[ios] Rebloom startup\n");
}

@interface RebloomLaunchPlaceholder : UIViewController
@end
@implementation RebloomLaunchPlaceholder
- (UIInterfaceOrientationMask)supportedInterfaceOrientations { return UIInterfaceOrientationMaskLandscape; }
- (BOOL)prefersStatusBarHidden { return YES; }
- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor colorWithRed:18/255.0 green:13/255.0 blue:11/255.0 alpha:1];
    UILabel *label = [UILabel new];
    label.text = @"Starting Rebloom...";
    label.textColor = [UIColor colorWithRed:232/255.0 green:196/255.0 blue:106/255.0 alpha:1];
    label.font = [UIFont boldSystemFontOfSize:22];
    label.textAlignment = NSTextAlignmentCenter;
    label.translatesAutoresizingMaskIntoConstraints = NO;
    [self.view addSubview:label];
    [NSLayoutConstraint activateConstraints:@[
        [label.centerXAnchor constraintEqualToAnchor:self.view.centerXAnchor],
        [label.centerYAnchor constraintEqualToAnchor:self.view.centerYAnchor]
    ]];
}
@end

@interface RebloomSceneDelegate : UIResponder <UIWindowSceneDelegate>
@property(nonatomic, strong) UIWindow *window;
@end

@implementation RebloomSceneDelegate
- (void)scene:(UIScene *)scene willConnectToSession:(UISceneSession *)session options:(UISceneConnectionOptions *)options {
    if (![scene isKindOfClass:UIWindowScene.class]) return;
    fprintf(stderr, "[ios] scene connected\n");
    self.window = [[UIWindow alloc] initWithWindowScene:(UIWindowScene *)scene];
    self.window.rootViewController = [RebloomLaunchPlaceholder new];
    [self.window makeKeyAndVisible];
    if (options.URLContexts.anyObject.URL)
        ios_launcher_receive_url((__bridge void *)options.URLContexts.anyObject.URL);
    static BOOL started = NO;
    if (started) return;
    started = YES;
    id delegate = UIApplication.sharedApplication.delegate;
    SEL start = NSSelectorFromString(@"postFinishLaunch");
    if ([delegate respondsToSelector:start])
        [delegate performSelector:start withObject:nil afterDelay:0.0];
    else
        fprintf(stderr, "[ios] SDL postFinishLaunch is missing\n");
}
- (void)scene:(UIScene *)scene openURLContexts:(NSSet<UIOpenURLContext *> *)contexts {
    NSURL *url = contexts.anyObject.URL;
    if (url) ios_launcher_receive_url((__bridge void *)url);
}
- (void)sceneDidBecomeActive:(UIScene *)scene {
    fprintf(stderr, "[ios] foreground active\n");
    extern void SDL_OnApplicationDidBecomeActive(void);
    if (SDL_WasInit(SDL_INIT_VIDEO)) SDL_OnApplicationDidBecomeActive();
}
- (void)sceneWillResignActive:(UIScene *)scene {
    fprintf(stderr, "[ios] resigning active\n");
    extern void SDL_OnApplicationWillResignActive(void);
    if (SDL_WasInit(SDL_INIT_VIDEO)) SDL_OnApplicationWillResignActive();
}
- (void)sceneDidEnterBackground:(UIScene *)scene {
    fprintf(stderr, "[ios] entered background\n");
    extern void SDL_OnApplicationDidEnterBackground(void);
    if (SDL_WasInit(SDL_INIT_VIDEO)) SDL_OnApplicationDidEnterBackground();
}
- (void)sceneWillEnterForeground:(UIScene *)scene {
    fprintf(stderr, "[ios] entering foreground\n");
    extern void SDL_OnApplicationWillEnterForeground(void);
    if (SDL_WasInit(SDL_INIT_VIDEO)) SDL_OnApplicationWillEnterForeground();
}
@end
