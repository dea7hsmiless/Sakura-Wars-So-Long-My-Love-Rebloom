Rebloom 0.1 - Android arm64
===========================

File:  Rebloom-0.1-android-arm64.apk
Size:  49,184,208 B
SHA-256: 4da9c29e4945e335cbf758b8e08256698c85926648bf1ccbf5b62fda3883bff5

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
3. Press Play. A controller is the intended input; there is no touch overlay yet.

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
