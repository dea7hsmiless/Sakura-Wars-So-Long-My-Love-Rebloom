// SDL's iOS entry point. SDL2main starts UIKit, the scene delegate calls
// SDL's postFinishLaunch, and SDL calls this function. The UIKit launcher owns
// the screen first; after Play it returns the runner's arguments and the game
// starts in the window SDL creates next.
#include <SDL_main.h>
#include "ios_launcher.h"

extern int ps2_host_main(int argc, char **argv);

int main(int argc, char **argv) {
    (void)argc;
    (void)argv;
    if (!ios_launcher_run()) return 0;
    return ps2_host_main(ios_launcher_argc(), ios_launcher_argv());
}
