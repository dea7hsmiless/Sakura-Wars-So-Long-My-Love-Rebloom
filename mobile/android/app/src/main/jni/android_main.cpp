// SDLActivity loads libmain.so and calls SDL_main. GameActivity hands the disc
// and settings over through nativeLaunch (JNI); the process environment is only
// a fallback (Java's Os.setenv did not reach the SDL thread on Android 15).
#include <android/log.h>
#include <jni.h>

#include <atomic>
#include <cstdlib>
#include <cstring>
#include <string>

extern int ps2_host_main(int argc, char **argv);

namespace {

struct Launch {
    std::string disc, data, memcard, shader;
    std::string look, aspect, scale, touch, tap, deinterlace, dedither, title, controller_db;
};

std::atomic<Launch *> g_launch{nullptr};

std::string text(JNIEnv *env, jstring value) {
    if (!value) return {};
    const char *chars = env->GetStringUTFChars(value, nullptr);
    std::string result = chars ? chars : "";
    if (chars) env->ReleaseStringUTFChars(value, chars);
    return result;
}

const char *env_or(const char *name, const std::string &fallback) {
    if (!fallback.empty()) return fallback.c_str();
    const char *value = std::getenv(name);
    return value ? value : "";
}

}  // namespace

extern "C" JNIEXPORT void JNICALL
Java_com_rebloom_sakurawarsv_GameActivity_nativeLaunch(JNIEnv *env, jclass, jstring disc, jstring data,
                                                       jstring memcard, jstring shader, jstring look,
                                                       jstring aspect, jstring scale, jstring touch,
                                                       jstring tap, jstring deinterlace, jstring dedither,
                                                       jstring title, jstring controller_db) {
    Launch *launch = new Launch;
    launch->disc = text(env, disc);
    launch->data = text(env, data);
    launch->memcard = text(env, memcard);
    launch->shader = text(env, shader);
    launch->look = text(env, look);
    launch->aspect = text(env, aspect);
    launch->scale = text(env, scale);
    launch->touch = text(env, touch);
    launch->tap = text(env, tap);
    launch->deinterlace = text(env, deinterlace);
    launch->dedither = text(env, dedither);
    launch->title = text(env, title);
    launch->controller_db = text(env, controller_db);
    Launch *old = g_launch.exchange(launch, std::memory_order_acq_rel);
    delete old;
    __android_log_print(ANDROID_LOG_INFO, "Rebloom", "nativeLaunch disc=%s data=%s", launch->disc.c_str(),
                        launch->data.c_str());
}

extern "C" int SDL_main(int argc, char **argv) {
    (void)argc;
    (void)argv;
    Launch *launch = g_launch.load(std::memory_order_acquire);
    const std::string disc = launch ? launch->disc : (std::getenv("REBLOOM_DISC") ? std::getenv("REBLOOM_DISC") : "");
    const std::string data = launch ? launch->data : (std::getenv("REBLOOM_DATA") ? std::getenv("REBLOOM_DATA") : "");
    const std::string memcard = launch ? launch->memcard : (std::getenv("REBLOOM_MEMCARD") ? std::getenv("REBLOOM_MEMCARD") : "");
    const std::string shader = launch ? launch->shader : "";
    const std::string look = launch ? launch->look : "1";
    const std::string aspect = launch ? launch->aspect : "16:9";
    const std::string scale = launch ? launch->scale : "3";
    const std::string touch = launch ? launch->touch : "1";
    const std::string tap = launch ? launch->tap : "1";
    const std::string deinterlace = launch ? launch->deinterlace : "off";
    const std::string dedither = launch ? launch->dedither : "1";
    const std::string title = launch ? launch->title : "Sakura Wars V: So Long, My Love - Rebloom";
    const std::string controller_db = launch ? launch->controller_db : "";

    __android_log_print(ANDROID_LOG_INFO, "Rebloom", "SDL_main disc=%s data=%s touch=%s",
                        disc.c_str(), data.c_str(), touch.c_str());
    if (disc.empty()) return 2;

    setenv("PS2_LOOK", look.empty() ? "1" : look.c_str(), 1);
    setenv("PS2_ASPECT", aspect.empty() ? "16:9" : aspect.c_str(), 1);
    setenv("PS2_SCALE", scale.empty() ? "3" : scale.c_str(), 1);
    setenv("PS2_PRESENT_MODE", "fifo", 1);
    setenv("PS2_WINDOW_TITLE", title.c_str(), 1);
    setenv("REBLOOM_TOUCH", touch.c_str(), 1);
    setenv("REBLOOM_TAP", tap.c_str(), 1);
    if (deinterlace == "off") setenv("PS2_NO_DEINTERLACE", "1", 1);
    if (dedither == "1" && !shader.empty()) setenv("PS2_BLIT_SHADER", shader.c_str(), 1);
    if (!controller_db.empty()) setenv("SDL_GAMECONTROLLERCONFIG_FILE", controller_db.c_str(), 1);

    char *args[] = {
        const_cast<char *>("SakuraWarsV"),
        const_cast<char *>("--disc"), const_cast<char *>(disc.c_str()),
        const_cast<char *>("--game-dir"), const_cast<char *>(data.empty() ? "." : data.c_str()),
        const_cast<char *>("--memcard"), const_cast<char *>(memcard.empty() ? "play-english.ps2" : memcard.c_str()),
        const_cast<char *>("--window"), nullptr,
    };
    return ps2_host_main(8, args);
}
