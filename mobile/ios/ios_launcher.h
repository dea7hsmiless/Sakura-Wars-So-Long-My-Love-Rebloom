#ifndef REBLOOM_IOS_LAUNCHER_H
#define REBLOOM_IOS_LAUNCHER_H

#ifdef __cplusplus
extern "C" {
#endif

/* Runs the UIKit launcher on the main thread. Returns 1 when the player chose
 * Play, 0 when the launcher was closed. The arguments are valid afterwards
 * until the next call. */
int ios_launcher_run(void);
int ios_launcher_argc(void);
char **ios_launcher_argv(void);

/* Called by the scene delegate for a document opened from Files. */
void ios_launcher_receive_url(void *nsurl);

#ifdef __cplusplus
}
#endif

#endif
