Rebloom 0.1 - Android arm64
===========================

File:  Rebloom-0.1-android-arm64.apk
Size:  49,206,880 B
SHA-256: b9d7c8979d333ac237e350463eb8d29ca9f9f8c55abeda0552da53781980c1a8

Requirements
------------
Android 9 (API 28) or newer, arm64, a Vulkan 1.1 driver. Built and debug-signed;
install by sideloading (adb install -r, or copy it to the device and open it).

Install
-------
1. Install the APK and open "Sakura Wars V - Rebloom".
2. Press "Import disc..." and choose Disc 1 (.iso). The file is copied into the
   app's external files folder, so the original can be deleted. Import Disc 2
   too for Japanese voices.
3. Press Play. The on-screen pad is shown by default; Settings -> Controls can
   turn it off, and "Tap to advance" sends Cross on a short tap. A Bluetooth
   controller can be paired in Android's Bluetooth settings and works beside
   the pad.

This build has not been run on a physical device or emulator. Unseen game code
is translated at run time, which needs the host compiler; later scenes may stop
on a device that does not have it.

Rebuild
-------
The Gradle project is in this folder's parent. With an Android SDK, NDK 30 and
JDK 21:

  cd mobile/android
  java -classpath gradle/wrapper/gradle-wrapper.jar \
       org.gradle.wrapper.GradleWrapperMain --no-daemon assembleDebug

No game data is included. You need your own disc.
