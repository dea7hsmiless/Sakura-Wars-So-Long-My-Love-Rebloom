Rebloom 0.1 - Android arm64
===========================

File:  Rebloom-0.1-android-arm64.apk
Size:  49,283,577 B
SHA-256: 098817ecca9a8712f88fe26a1547cc00e9b79aa8f19011a18c6802ba6c356832

Requirements
------------
Android 9 (API 28) or newer, arm64, a Vulkan 1.1 driver with at least 7 storage buffers per compute stage. SwiftShader emulators (4 buffers) cannot run the port. Built and debug-signed;
install by sideloading (adb install -r, or copy it to the device and open it).

Install
-------
1. Install the APK and open "Rebloom".
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
