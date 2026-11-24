Rebloom 0.1 - iOS arm64 (unsigned)
==================================

File:  Rebloom-0.1-ios-unsigned.ipa
Size:  20,968,283 B
SHA-256: 55f1765d3624f9b78b60a3727085d7e49199907d3ed7e5484002d2eb405883d5

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
   change its colour and opacity, enable button/stick haptics, and set the display
   to 16:9, 4:3 or Fill. The internal resolution starts at 1x. "Tap to advance"
   sends Cross on a short tap. A Bluetooth controller can be paired in iOS
   Settings > Bluetooth and works beside the pad.
4. If an older Rebloom is installed, delete it before installing this build;
   iOS can otherwise keep the old blank icon or cache.

The launcher now shows the key-art banner and rail logo; the app icons are
opaque RGB. The nav-spacer crash that stopped the previous launcher is fixed.

This build has not been signed or run on a device. The previous device run
aborted because Metal was capped at four storage buffers per stage; this build
requests eight (capped at the adapter's limit; the GS pass needs seven). If it still
exits, send Documents/rebloom.log from the app container.
iOS has no JIT and no C++ compiler, so code the build did not precompile cannot
be translated on the device; later scenes may stop.

Rebuild
-------
From Windows with the iPhoneOS SDK and the Swift toolchain's clang:

  python mobile/ios/build_ios.py

The script links the arm64 runtime, SDL2, wgpu-native and the UIKit launcher,
copies the icons, shader and touch overlay, and writes this IPA. The runtime must
include the Apple storage-buffer fix in runtime/src/gs/gpu/gpu.cpp: request eight
storage buffers per stage, capped at the adapter limit.

No game data is included. You need your own disc.
