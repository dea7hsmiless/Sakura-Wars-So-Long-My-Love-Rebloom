# Rebloom 0.1 — release handoff

Prepared 2026-11-23. **Nothing has been published.**

## Where it is

| Asset | Path | Size |
|---|---|---|
| Release folder | `Desktop\Rebloom-0.1-release\` | — |
| Windows zip | `Desktop\Rebloom-0.1-release\Rebloom-0.1-Windows-x86_64.zip` | 44,777,948 B |
| Extracted Windows tree | `Desktop\Rebloom-0.1-release\Rebloom-0.1-Windows-x86_64\` | ~150 MB |
| Linux tar.gz | `Desktop\Rebloom-0.1-release\Rebloom-0.1-Linux-x86_64.tar.gz` | 33,089,075 B |
| Linux AppImage | `Desktop\Rebloom-0.1-release\Rebloom-0.1-x86_64.AppImage` | 32,279,032 B |
| Android APK | `Desktop\Rebloom-0.1-release\mobile\android\dist\Rebloom-0.1-android-arm64.apk` | 49,206,880 B |
| iOS IPA | `Desktop\Rebloom-0.1-release\mobile\ios\dist\Rebloom-0.1-ios-unsigned.ipa` | 20,436,100 B |

Hashes are in `SHA256SUMS.txt`; `Verify-Rebloom.ps1` checks every download that is present.

- Windows: `397d94fbdaf0984f72947793ea01dcfee120b3563d6b6aafd1184a0193e38b0f`
- Linux: `e01930fb124fa41d2386d92aef432a7978192a02d4299543cd89cd7109f56dc0`
- AppImage: `4b538a6c224b410409d0d4242dc99e9afd4da03949538d8d1a89fc08c4941306`
- Android: `b9d7c8979d333ac237e350463eb8d29ca9f9f8c55abeda0552da53781980c1a8`
- iOS: `706d5964b22bcd86aa552e64bcab4c12106808f22f0c9da02d0c2d627d12990b`

## What was verified for this package

### Windows

- **The zip was extracted to a clean folder (529 files, no ISO) and the launcher opened** with
  its normal title. The packaged `game\data\keys.ini` and `gamepad.ini` load with zero problems,
  and the packaged game boots two frames with the temporal shader.
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

### Android

- arm64 runtime and generated game static libraries built with NDK 30 at API 28; Gradle
  `assembleDebug` succeeds from a clean build.
- APK contains `lib/arm64-v8a/libSDL2.so`, `lib/arm64-v8a/libmain.so`, the shader asset and the
  Java launcher; launcher icons are packaged at all densities.
- The launcher now uses the five-page rail (Play, Install, Settings, Support, About) with the
  same dark/gold/red styling as Windows. Settings has touch controls and tap-to-advance.
- `TouchOverlay` exports its JNI entry points (`nativeButton`, `nativeStick`, `nativeTrigger`,
  `nativeTap`, `nativeReset`); a Bluetooth pad still uses the normal SDL path in port 1 and
  works alongside the overlay.
- Not installed on a phone or emulator.

### iOS

- arm64 static runtime/game, SDL2, the native UIKit launcher and the touch overlay link into a
  thin arm64 Mach-O; `rebloom_touch_tap` and `rebloom_touch_install` are exported.
- The launcher uses the same rail and five pages as Android/Windows, with touch controls and
  tap-to-advance under Settings.
- IPA contains 13 entries and nine app icons; `GCSupportedGameControllers` and
  `GCSupportsControllerUserInteraction` are set for Bluetooth pads.
- Unsigned, not signed or installed on a device.

## What is NOT verified

| Item | Status |
|---|---|
| Battles / chapter 1 combat | never reached |
| Audio judged by ear | never listened to (levels measured only) |
| Save/load round trip through the in-game menu | not run |
| In-game F1 menu driven by hand | aspect row checked once |
| Second machine / clean Windows account | not tested |
| Disc 2 past boot | boots and detects layer 1; rest unplayed |
| Android on a device | build only; overlay, tap and Bluetooth pad not run on hardware |
| iOS on a device | unsigned; signing/install and overlay/tap not run on hardware |
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
