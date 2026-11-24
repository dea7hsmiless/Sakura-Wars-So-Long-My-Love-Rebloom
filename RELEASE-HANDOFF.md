# Rebloom 0.1 — release handoff

Prepared 2026-11-23. **Nothing has been published.**

## Where it is

| Asset | Path | Size |
|---|---|---|
| Release folder | `Desktop\Rebloom-0.1-release\` | — |
| Windows zip | `Desktop\Rebloom-0.1-release\Rebloom-0.1-Windows-x86_64.zip` | 44,777,758 B |
| Extracted Windows tree | `Desktop\Rebloom-0.1-release\Rebloom-0.1-Windows-x86_64\` | ~150 MB |
| Linux tar.gz | `Desktop\Rebloom-0.1-release\Rebloom-0.1-Linux-x86_64.tar.gz` | 33,087,282 B |
| Android APK | `Desktop\Rebloom-0.1-release\mobile\android\dist\Rebloom-0.1-android-arm64.apk` | 49,184,208 B |
| iOS IPA | `Desktop\Rebloom-0.1-release\mobile\ios\dist\Rebloom-0.1-ios-unsigned.ipa` | 20,413,211 B |

Hashes are in `SHA256SUMS.txt`; `Verify-Rebloom.ps1` checks every download that is present.

- Windows: `fcbd368a0d831fb60d9cb4ef32bdfd0275eede41160f7f4927fd595006e87e3d`
- Linux: `bea8104e9c68d7ace4b301d95dfe956dd9b9a3206caafccaa76ae7d1aedbdd14`
- Android: `4da9c29e4945e335cbf758b8e08256698c85926648bf1ccbf5b62fda3883bff5`
- iOS: `20b7a16e5e5742ab6ad788bbdc68280670b40f20aaafda4b45c951cc3337bede`

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
- Package refreshed with the new runtime, temporal shader, default `keys.ini`/`gamepad.ini`, and
  the new Controls editors.
- Linux launcher editors were tested on a throwaway copy: keyboard capture stores `Left`,
  gamepad choices rewrite all twelve actions, and comments in `keys.ini` are preserved.

### Android

- arm64 runtime and generated game static libraries built with NDK 30 at API 28; Gradle
  `assembleDebug` succeeds.
- APK contains `lib/arm64-v8a/libSDL2.so`, `lib/arm64-v8a/libmain.so`, the shader asset and the
  Java launcher; launcher icons are packaged at all densities.
- Not installed on a phone or emulator.

### iOS

- arm64 static runtime/game, SDL2 and the native UIKit launcher link into a thin arm64 Mach-O.
- IPA contains 13 entries, nine app icons, the Info.plist icon dictionary, the shader and the
  executable at mode 755; the zip is valid.
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
| Android on a device | build only; no touch overlay yet |
| iOS on a device | unsigned; signing and install not done; no touch overlay |
| Linux on a clean distro | WSLg only |

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
