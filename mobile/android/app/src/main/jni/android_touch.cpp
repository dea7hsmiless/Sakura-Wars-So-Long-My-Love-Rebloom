// JNI entry points for the Java on-screen pad (TouchOverlay.java).
#include <jni.h>

#include "touch.hpp"

extern "C" JNIEXPORT void JNICALL
Java_com_rebloom_sakurawarsv_TouchOverlay_nativeButton(JNIEnv *, jclass, jint button, jboolean down) {
    touch::button(button, down == JNI_TRUE);
}

extern "C" JNIEXPORT void JNICALL
Java_com_rebloom_sakurawarsv_TouchOverlay_nativeStick(JNIEnv *, jclass, jint which, jint x, jint y) {
    touch::stick(which, x, y);
}

extern "C" JNIEXPORT void JNICALL
Java_com_rebloom_sakurawarsv_TouchOverlay_nativeTrigger(JNIEnv *, jclass, jint which, jint value) {
    touch::trigger(which, value);
}

extern "C" JNIEXPORT void JNICALL
Java_com_rebloom_sakurawarsv_TouchOverlay_nativeReset(JNIEnv *, jclass) {
    touch::reset();
}

extern "C" JNIEXPORT void JNICALL
Java_com_rebloom_sakurawarsv_TouchOverlay_nativeTap(JNIEnv *, jclass) {
    touch::tap();
}
