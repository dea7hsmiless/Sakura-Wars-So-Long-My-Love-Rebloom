Rebloom 0.1 - iOS arm64 (unsigned)
==================================

File:  Rebloom-0.1-ios-unsigned.ipa
Size:  20,485,248 B
SHA-256: 788596dc58c0fe3aad983e2bb977901db47d27ba60a9a049d2be0a76408a2ed6

Requirements
------------
iOS 16.4 or newer, arm64. The IPA is unsigned: sign it with your own Apple
certificate (Sideloadly, AltStore, or Xcode) before installing. No App Store
claim is made.

Install
-------
1. Sign and install the IPA with your tool of choice.
2. Open "Rebloom", import Disc 1 through the Files picker, and
   press Play. Import Disc 2 for Japanese voices.
3. The on-screen pad is shown by default; Settings -> Controls can turn it off,
   and "Tap to advance" sends Cross on a short tap. A Bluetooth controller can
   be paired in iOS Settings > Bluetooth and works beside the pad.

This build has not been signed or run on a device. iOS has no JIT and no C++
compiler, so code the build did not precompile cannot be translated on the
device; later scenes may stop.

Rebuild
-------
From Windows with the iPhoneOS SDK and the Swift toolchain's clang:

  python mobile/ios/build_ios.py

The script links the arm64 runtime, SDL2, wgpu-native and the UIKit launcher,
copies the icons, shader and touch overlay, and writes this IPA.

No game data is included. You need your own disc.
