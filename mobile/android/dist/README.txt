Rebloom 0.1 - Android arm64
===========================

File:  Rebloom-0.1-android-arm64.apk
Size:  49,706,368 B
SHA-256: dad0fde2193ee3e75d3089bee67755f1c20ee20ae49962e1e49f5260c4984437

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
3. Press Play. The on-screen pad is shown by default. Settings -> Controls can
   turn it off, change its colour and opacity, enable button/stick haptics, and
   set the display to 16:9, 4:3 or Fill. The internal resolution starts at 1x.
   "Tap to advance" sends Cross on a short tap. A Bluetooth controller can be
   paired in Android's Bluetooth settings and works beside the pad.

The host-GPU emulator test reached the launcher, loaded the save, formatted the
memory card and reached the Sega/opening screens. A physical phone is still
untested. Unseen game code is translated at run time, which needs the host
compiler; later scenes may stop on a device that does not have it.

Rebuild
-------
The Gradle project is in this folder's parent. With an Android SDK, NDK 30 and
JDK 21:

  cd mobile/android
  java -classpath gradle/wrapper/gradle-wrapper.jar \
       org.gradle.wrapper.GradleWrapperMain --no-daemon assembleDebug

No game data is included. You need your own disc.
