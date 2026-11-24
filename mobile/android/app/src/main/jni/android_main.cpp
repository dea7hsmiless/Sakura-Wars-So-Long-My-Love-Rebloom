// SDLActivity loads libmain.so and calls SDL_main. The Java launcher has put
// the disc and settings in the environment; the recompiled runner takes it
// from there, exactly as the desktop runner takes its arguments.
#include <cstdlib>
#include <cstring>

extern int ps2_host_main(int argc, char **argv);

extern "C" int SDL_main(int argc, char **argv) {
    (void)argc;
    (void)argv;
    const char *disc = std::getenv("REBLOOM_DISC");
    const char *data = std::getenv("REBLOOM_DATA");
    const char *memcard = std::getenv("REBLOOM_MEMCARD");
    if (!disc || !*disc) return 2;
    if (!data || !*data) data = ".";
    if (!memcard || !*memcard) memcard = "play-english.ps2";
    char *args[] = {
        const_cast<char *>("SakuraWarsV"),
        const_cast<char *>("--disc"), const_cast<char *>(disc),
        const_cast<char *>("--game-dir"), const_cast<char *>(data),
        const_cast<char *>("--memcard"), const_cast<char *>(memcard),
        const_cast<char *>("--window"), nullptr,
    };
    return ps2_host_main(8, args);
}
