# Rebloom 0.1 — release handoff

Prepared 2026-11-23; mobile builds refreshed 2026-11-24. **Published on GitHub:** https://github.com/dea7hsmiless/Sakura-Wars-So-Long-My-Love-Rebloom

## Where it is

| Asset | Path | Size |
|---|---|---|
| Release folder | `Desktop\Rebloom-0.1-release\` | — |
| Windows zip | `Desktop\Rebloom-0.1-release\Rebloom-0.1-Windows-x86_64.zip` | 36,481,838 B |
| Extracted Windows tree | `Desktop\Rebloom-0.1-release\Rebloom-0.1-Windows-x86_64\` | ~150 MB |
| Linux tar.gz | `Desktop\Rebloom-0.1-release\Rebloom-0.1-Linux-x86_64.tar.gz` | 33,593,785 B |
| Linux AppImage | `Desktop\Rebloom-0.1-release\Rebloom-0.1-x86_64.AppImage` | 32,815,608 B |
| Android APK | `Desktop\Rebloom-0.1-release\mobile\android\dist\Rebloom-0.1-android-arm64.apk` | 50,034,100 B |
| iOS IPA | `Desktop\Rebloom-0.1-release\mobile\ios\dist\Rebloom-0.1-ios-unsigned.ipa` | 20,969,301 B |

Hashes are in `SHA256SUMS.txt`; `Verify-Rebloom.ps1` checks every download that is present.

- Windows: `f03adf533f56e90733ba0547e23f862847770b8710b24b93b117377f374f9a35`
- Linux: `e1d2b57dcfdd269043efb5e9d4134232d90dc4da4f4df8b0e313726439225e06`
- AppImage: `b3b2ec9ad4b054d0c54d3aa6c9771cf3ac78f1dda60ad2d62e71dff6720d6fbb`
- Android: `33606b015243fed6292971ec39172f3c0e0c0506bec9948ce0d7d9787ea417ee`
- iOS: `0f8f178eb5fc189817d24a922671cc22bf3bcfbc55cd71bd05aea683d4db7344`

## What was verified for this package

### RecompLauncher

- **`recomplauncher.json` is in the Windows zip, the Linux tar and the AppImage root.** It
  declares Disc 1 and optional Disc 2 with ISO 9660 checks for `SLUS_219.27` and `SLUS_219.30`,
  starts the launcher headlessly with both discs, and exposes voices, resolution, window, aspect,
  V-Sync and de-dither on the game page. The file validates against the published schema.
- **Direct start was exercised on Windows and Linux with a deliberately invalid ISO and with a
  missing disc.** The launcher started the runner without a window, waited for it, and passed the
  runner's exit code back (1 for the bad image, 2 for the missing disc). The normal no-argument
  launch still opens the five-page launcher.

### Windows

- **The player zip extracts to 21 files (no ISO) and the launcher opens** with
  its normal title. The packaged `game\data\keys.ini` and `gamepad.ini` load with zero problems,
  and the packaged game boots two frames with the temporal shader. `recomplauncher.json` sits at
  the top of the zip.
- **Keyboard controls were fixed and tested through the real launcher.** Settings → Controls →
  Keyboard controls → Change → Left now captures `Left`; Right, Up, Down, Tab, Enter and letters
  also capture. The earlier bug was Windows sending arrows/Tab/Enter as dialog navigation, which
  `KeyDown` never saw; `ProcessCmdKey` now takes them first.
- The same flow was exercised through the launcher's actual window (Settings tab, Controls tab,
  Change button, `Press a key` dialog): `keys.ini` changed from `dpad_up = Up` to
  `dpad_up = Left`.
- **Gamepad edits** write all twelve actions to `gamepad.ini`; the in-game runtime reads the file
  and a virtual-pad test with `cross = b` produced `b → Cross` (and `a → Circle`).
- **Live reload:** editing `keys.ini` while the game runs produces a second `[keys] ... read`
  within a second, even in exclusive fullscreen with no focus change.
- `Open gamepad.ini` now writes the standard mapping first, so it is not a dead end before a
  controller is seen. `game\data\keys.ini` and `gamepad.ini` ship with those defaults.
- The Controls page wording was corrected: Start, Select and triggers stay standard; L3/R3 map
  the stick presses.
- Settings -> Display -> **Launcher colors** defaults to **Sakura** (plum and rose) and offers
  **Classic (gold)**. Both palettes rendered in the real launcher from `launcher.ini`; the setting
  asks for a launcher reopen.
- Settings defaults: fullscreen + exclusive, 16:9, 3×, Crisp + edges, deinterlace off, VSync
  fifo, latency 2, DX12, temporal de-dither on.
- Boot-time work: lazy mipmap shader compilation cut a 2-frame 3× start from 11.9 s to 10.55 s
  and nine startup shaders from ~2.0 s to ~1.26 s.

### Linux

- Runtime rebuilt with the same controls/reload changes; the packaged binary boots two frames
  under WSLg (`[ee] stopped after 2 frames`), and the self-contained launcher starts and stays
  open.
- The AppImage was assembled with appimagetool and run under WSLg with
  `--appimage-extract-and-run`; the launcher stayed open and the AppDir has the launcher, game,
  shader, icon, desktop file and AppRun. Its user data goes to `REBLOOM_HOME` or
  `~/.local/share/rebloom`.
- Package refreshed with the new runtime, temporal shader, default `keys.ini`/`gamepad.ini`, and
  the new Controls editors.
- Linux launcher editors were tested on a throwaway copy: keyboard capture stores `Left`,
  gamepad choices rewrite all twelve actions, and comments in `keys.ini` are preserved.
- The launcher now uses the Windows key art: a 1200x800 window, the hero banner on Play, the
  logo in the rail, the corrected first-run summary, and `--play` starts without a bypass setting.
- Settings -> Display -> **Launcher colors** defaults to **Sakura** and offers **Classic (gold)**;
  the Sakura palette was rendered in the live launcher and Classic keeps the previous values. The
  choice asks for a launcher reopen.
- Audio was captured from WSLg's RDP sink (29.4 s, non-zero samples); a cold WSLg start now waits
  for the PulseAudio sink instead of falling back to silent ALSA.

### Android

- arm64 runtime and generated game static libraries built with NDK 30 at API 28; Gradle
  `assembleDebug` succeeds from a clean build.
- APK contains `lib/arm64-v8a/libSDL2.so`, `lib/arm64-v8a/libmain.so`, the shader asset and the
  Java launcher; launcher icons are packaged at all densities.
- The launcher now uses the five-page rail (Play, Install, Settings, Support, About) with the
  sakura palette and mobile sizing from ReDUB. Settings has touch controls and tap-to-advance.
- The game was run on the Android emulator with its host GPU (RTX 3070 Vulkan): the disc was read,
  nine shaders compiled, the touch overlay drew, its d-pad selected Yes, and its Cross button
  formatted an 8 MB memory card, created a game file, and reached the Sega and opening screens.
  An empty-screen tap also sent Cross and advanced the prompts. SwiftShader's 4-storage-buffer
  limit cannot run the compute pass; a real Vulkan GPU is required.
- `TouchOverlay` exports its JNI entry points (`nativeButton`, `nativeStick`, `nativeTrigger`,
  `nativeTap`, `nativeReset`); a Bluetooth pad still uses the normal SDL path in port 1 and
  works alongside the overlay.
- The overlay now has a real analog stick (the knob follows the thumb and sends continuous
  axes; the outer edge still nudges the d-pad for menus), haptics when it leaves the centre and
  reaches the outer ring, and launcher-selected accent colour/opacity. Settings has
  on-screen controls On/Off, touch colour, opacity, button haptics, stick haptics, and
  16:9 / 4:3 / Fill display modes.
- The launcher now shows the Windows hero art and rail logo; the Play hero is capped at 180 dp
  so the Play card stays visible on small screens.
- The mobile palette now matches the sakura theme (plum panels, cream text, sakura-pink accents,
  deep-rose active nav). The hero is a sharp 2400x800 key-art banner that fills the pane edge to
  edge without blurred side panels, and the Play page puts the title, status and actions below it.
- The mobile launcher text is larger and uses medium-weight type for small labels; the low-contrast
  muted text was lightened. The iOS Play page now uses the ReDUB layout: a pane-wide hero at the top,
  then status, title, subtitle, actions and cards, with no heading above the hero.
- The mobile hero is now shown at its own 4:1 shape, so the blurred side bands reach the pane
  edges instead of being cropped; on Android the hero also sits outside the page's 22 dp padding.
- Android 15 edge-to-edge insets and display cutouts are handled on the launcher root, and the iOS
  rail starts inside the safe area, so the notch/Dynamic Island no longer covers the rail or shifts
  the page on iPhone landscape. The status bar and gesture bar no longer cover the footer.
- The mobile launcher now defaults to **1x internal resolution**; 2x and 3x stay available in
  Settings -> Display.
- The refreshed launcher was reinstalled on the same emulator on 2026-11-24: the sakura palette,
  larger medium-weight text, hero and Android 15 insets were checked, and Play booted the game to its
  loaded-save screen.
- Not installed on a phone; the host-GPU emulator run above is the only device test.

### iOS

- arm64 static runtime/game, SDL2, the native UIKit launcher and the touch overlay link into a
  thin arm64 Mach-O; `rebloom_touch_tap` and `rebloom_touch_install` are exported.
- The launcher uses the same rail and five pages as Android/Windows, with the hero banner and
  rail logo, a real analog stick with button/stick haptics, configurable touch colour/opacity,
  on-screen controls On/Off, tap-to-advance, and 16:9 / 4:3 / Fill display modes.
- IPA contains 16 entries and nine app icons; `GCSupportedGameControllers` and
  `GCSupportsControllerUserInteraction` are set for Bluetooth pads.
- The rail uses 126 pt below 800 pt wide and 160 pt above, matching the Android launcher.
- The launcher now carries the Windows hero banner on Play and the logo in the rail; the app
  icons are opaque RGB so iOS can display them. The mobile palette and full-width hero match
  Android, and the Play page follows ReDUB's layout (hero, status, title, actions, then cards).
- The first device log showed the crash: `wgpuDeviceCreateBindGroupLayout` rejected the GS pass
  because Metal was requested with four storage buffers per stage while the pass binds seven.
  The runtime now asks for eight storage buffers (capped at the adapter's limit) on Apple and logs
  both values (change in `C:\recomp\ps2-native-recomp\runtime\src\gs\gpu\gpu.cpp`). The IPA
  was rebuilt with that fix; a new device run must confirm it.
- The next launcher build then crashed at startup with `-[UIView currentTitle]`: the flexible
  nav spacer is a plain UIView, but `render` treated every arranged subview as a button. `render`
  now skips non-UIButton views; the IPA was rebuilt. The attached log contains both the earlier
  storage-limit crash and the repeated nav-spacer crashes from the test builds.
- A constructor writes `[ios] process start` to `Documents/rebloom.log` before
  UIApplicationMain, and uncaught exceptions are logged, for the current "does not open" report.
- The previous signed build ran on an iPhone (A18 Pro); the current IPA is unsigned and has not
  been retested.

## What is NOT verified

| Item | Status |
|---|---|
| Battles / chapter 1 combat | never reached |
| Audio judged by ear | never listened to (levels measured only) |
| Save/load round trip through the in-game menu | not run |
| In-game F1 menu driven by hand | aspect row checked once |
| Second machine / clean Windows account | not tested |
| Disc 2 past boot | boots and detects layer 1; rest unplayed |
| Android on a device | emulator with host GPU only; overlay, tap and Bluetooth pad not run on a phone |
| iOS on a device | signed and launched on an iPhone (A18 Pro); crashed in the Metal storage-buffer limit before the first frame; fixed in the current IPA, not yet retested |
| Linux on a clean distro | WSLg only; AppImage run with --appimage-extract-and-run |

## Before publishing

1. Decide the repository and tag: `v0.1`, with all four downloads attached.
2. Upload `screenshots\launcher.png` and `screenshots\game.png`, then replace the download table
   in `RELEASE-PAGE.md` with live asset URLs.
3. Re-check every hash after any change and update `SHA256SUMS.txt` and `LABEL.txt`.
4. Sign the iOS IPA for distribution, or label it clearly as a developer build.
5. The package ships `game\SakuraWarsV.exe`, which contains code translated from the disc. That
   matches how ReDUB ships `mcdub3remix.exe`, but it is the one distribution decision worth
   making deliberately.

## Rebuilding the package

```powershell
# Windows launcher
powershell -NoProfile -ExecutionPolicy Bypass -File Rebloom-0.1-Windows-x86_64/source/Build-Launcher.ps1 -NoShortcut

# Windows game (needs your own ISO and the toolkit)
bash scripts/port.sh sakura5 "<disc1.iso>" --native-only
# then copy build/native-sakura5/ps2run.exe to game\SakuraWarsV.exe

# Linux launcher
cd /root/rebloom && ./venv/bin/pyinstaller --noconfirm --distpath dist --workpath pyi "pyi/Rebloom Launcher.spec"

# Android
cd mobile/android && java -classpath gradle/wrapper/gradle-wrapper.jar org.gradle.wrapper.GradleWrapperMain --no-daemon assembleDebug

# iOS
python mobile/ios/build_ios.py
```

`source\recomp\rebloom-changes.patch` contains the toolkit changes, including the window-title
and window-icon fix. `game\icon.bmp` is loaded by the runner for its title-bar and taskbar icon.
