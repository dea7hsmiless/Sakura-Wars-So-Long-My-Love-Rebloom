A native build of **Sakura Wars: So Long, My Love** (PlayStation 2), made by static
recompilation, for Windows, Linux, Android and iOS. These packages contain the port only;
**you need your own discs.**

The game's own PlayStation 2 code is translated to C++ ahead of time and compiled into a normal
program. No emulator and no BIOS are involved. The game's CD/DVD server, its sound engine
(`Sakuya 2`) and the CRI ADX driver run as guest code on an interpreted IOP; only disc reads and
module loading are answered by the runtime.

**Rebloom 0.1 is the first public build** — a complete launcher, native renderer, controls editors
and mobile touch layouts around the recompiled game.

## Downloads

| Platform | Download | Requirements |
| --- | --- | --- |
| Windows | [Rebloom-0.1-Windows-x86_64.zip](https://github.com/dea7hsmiless/Sakura-Wars-So-Long-My-Love-Rebloom/releases/download/v0.1/Rebloom-0.1-Windows-x86_64.zip) | Windows 10/11 x64; Direct3D 12 or Vulkan; your own disc |
| Linux | [Rebloom-0.1-x86_64.AppImage](https://github.com/dea7hsmiless/Sakura-Wars-So-Long-My-Love-Rebloom/releases/download/v0.1/Rebloom-0.1-x86_64.AppImage) | x86-64, glibc 2.39+, Vulkan 1.1 |
| Linux alternative | [Rebloom-0.1-Linux-x86_64.tar.gz](https://github.com/dea7hsmiless/Sakura-Wars-So-Long-My-Love-Rebloom/releases/download/v0.1/Rebloom-0.1-Linux-x86_64.tar.gz) | Same package for systems that cannot run an AppImage |
| Android | [Rebloom-0.1-android-arm64.apk](https://github.com/dea7hsmiless/Sakura-Wars-So-Long-My-Love-Rebloom/releases/download/v0.1/Rebloom-0.1-android-arm64.apk) | Android 9+ arm64; Vulkan GPU with 7+ storage buffers; debug-signed sideload |
| iOS | [Rebloom-0.1-ios-unsigned.ipa](https://github.com/dea7hsmiless/Sakura-Wars-So-Long-My-Love-Rebloom/releases/download/v0.1/Rebloom-0.1-ios-unsigned.ipa) | iOS 16.4+ arm64; unsigned, needs your own signing |

Also attached: [SHA256SUMS.txt](https://github.com/dea7hsmiless/Sakura-Wars-So-Long-My-Love-Rebloom/releases/download/v0.1/SHA256SUMS.txt).

## What's in 0.1

### Native recompilation

- Boot, health screen, memory-card format, save and load.
- Title menu, New Game, the opening film and the opening chapter's dialogue.
- Disc 1 (`SLUS_219.27`, English voices) and Disc 2 (`SLUS_219.30`, Japanese voices).
- 60 fps at 1080p on an RTX 3070 with around 14% CPU use.
- One memory card per voice language, so switching discs never overwrites the other save.

### Windows and Linux

- Five-page launcher with **Play / Install / Settings / Support / About**.
- Sakura palette by default, with **Settings → Display → Launcher colors → Classic (gold)**.
- Internal resolution 1×–4×, aspect 4:3 / 16:9 / Fill, picture looks, deinterlace and temporal de-dither.
- Keyboard and gamepad editors; the game re-reads both files within a second.
- Disc import copies the ISO into `discs/` and verifies the serial.
- Direct3D 12 or Vulkan on Windows; Vulkan on Linux.

### Android and iOS

- Five-page mobile launcher with sharp full-bleed key art.
- Real analog stick with button and stick haptics; touch colour and opacity.
- On-screen controls On/Off, optional tap-to-advance, and Bluetooth controllers.
- 16:9 / 4:3 / Fill display modes, and **1× internal resolution by default**.
- Import copies the ISO into app storage; the original file can be deleted.

## Install

### Windows

1. Extract the zip and run `Rebloom Launcher.exe`.
2. Open **Install** and import your Disc 1 ISO. Import Disc 2 as well for Japanese voices.
3. Press **Play**.

Disc 2 is 7.17 GB — use NTFS or exFAT, not FAT32. The ISO is copied into `discs/`, so the source
file can be deleted afterwards.

### Linux

Extract the tar.gz, or mark the AppImage executable and run it. Open **Install**, import Disc 1,
and press **Play**. The AppImage keeps discs, saves and settings in `~/.local/share/rebloom`
(or `REBLOOM_HOME`).

### Android

Sideload the APK, open **Rebloom**, press **Import disc...**, choose your ISO, then **Play**.
**Settings → Controls** changes the pad, haptics, colour and opacity; **Settings → Display** sets
resolution and aspect.

### iOS

Sign the unsigned IPA with your own certificate, install it, and import Disc 1 through the Files
picker. Delete an older Rebloom install first so iOS does not keep cached assets.

## Verify

Download `SHA256SUMS.txt` next to your package.

Windows:

```powershell
Get-FileHash .\Rebloom-0.1-Windows-x86_64.zip -Algorithm SHA256
```

Linux:

```sh
sha256sum -c SHA256SUMS.txt --ignore-missing
```

## Notes

This is an early 0.1 fan release. The opening chapter and launcher flows are the tested path;
battles, audio balance and Disc 2 past boot are still being verified. The full test matrix is in
[RELEASE-HANDOFF.md](https://github.com/dea7hsmiless/Sakura-Wars-So-Long-My-Love-Rebloom/blob/main/RELEASE-HANDOFF.md).

On Windows, **1× internal resolution** gives the cleanest fades in this build. 2× and 3× remain
available and are being tuned for 0.2. Mobile already defaults to 1×.

## Credits

- **ps2-native-recomp** by exoteric33 — the recompiler and runtime.
- **ps2-web-recomp** by Samir Nuri — the code generator underneath it.
- **wgpu-native**, **SDL2**, **DirectX Shader Compiler**, **pycdlib** — see `THIRD-PARTY.md`.
- Launcher design follows the ReDUB launcher's model.

## Legal

Fan project. Not affiliated with Sega or Red Entertainment. Sakura Wars and all related names,
characters, art and music belong to their owners. No game content is distributed here. The key
art and logo are used only to identify this non-commercial fan project. You must own the discs to
use the port.
