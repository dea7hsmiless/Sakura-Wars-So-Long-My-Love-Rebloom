Rebloom 0.1 - iOS arm64 (unsigned)
==================================

File:  Rebloom-0.1-ios-unsigned.ipa
Size:  20,413,211 B
SHA-256: 20b7a16e5e5742ab6ad788bbdc68280670b40f20aaafda4b45c951cc3337bede

Requirements
------------
iOS 16.4 or newer, arm64. The IPA is unsigned: sign it with your own Apple
certificate (Sideloadly, AltStore, or Xcode) before installing. No App Store
claim is made.

Install
-------
1. Sign and install the IPA with your tool of choice.
2. Open "Sakura Wars V - Rebloom", import Disc 1 through the Files picker, and
   press Play. Import Disc 2 for Japanese voices.
3. A controller is the intended input; there is no touch overlay yet.

This build has not been signed or run on a device. iOS has no JIT and no C++
compiler, so code the build did not precompile cannot be translated on the
device; later scenes may stop.

Rebuild
-------
From Windows with the iPhoneOS SDK and the Swift toolchain's clang:

  python mobile/ios/build_ios.py

The script links the arm64 runtime, SDL2, wgpu-native and the UIKit launcher,
copies the icons and shader, and writes this IPA.

No game data is included. You need your own disc.
