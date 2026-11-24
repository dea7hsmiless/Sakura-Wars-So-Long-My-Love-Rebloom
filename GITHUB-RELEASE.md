A native build of **Sakura Wars V: So Long, My Love** (PlayStation 2), made by static
recompilation, for Windows, Linux, Android and iOS. These packages contain the port only;
**you need your own discs.**

The game's own PlayStation 2 code is translated to C++ ahead of time and compiled into a normal
program. No emulator and no BIOS are involved. The game's CD/DVD server, its sound engine
(`Sakuya 2`) and the CRI ADX driver run as guest code on an interpreted IOP; only disc reads and
module loading are answered by the runtime.

## Downloads

| Platform | Download | Requirements |
| --- | --- | --- |
| Windows | [Rebloom-0.1-Windows-x86_64.zip](https://github.com/dea7hsmiless/Sakura-Wars-V-Rebloom/releases/download/v0.1/Rebloom-0.1-Windows-x86_64.zip) | Windows 10/11 x64; Direct3D 12 or Vulkan; your own disc |
| Linux | [Rebloom-0.1-x86_64.AppImage](https://github.com/dea7hsmiless/Sakura-Wars-V-Rebloom/releases/download/v0.1/Rebloom-0.1-x86_64.AppImage) | x86-64, glibc 2.39+, Vulkan 1.1 |
| Linux alternative | [Rebloom-0.1-Linux-x86_64.tar.gz](https://github.com/dea7hsmiless/Sakura-Wars-V-Rebloom/releases/download/v0.1/Rebloom-0.1-Linux-x86_64.tar.gz) | Same package for systems that cannot run an AppImage |
| Android | [Rebloom-0.1-android-arm64.apk](https://github.com/dea7hsmiless/Sakura-Wars-V-Rebloom/releases/download/v0.1/Rebloom-0.1-android-arm64.apk) | Android 9+ arm64; Vulkan GPU with 7+ storage buffers; debug-signed sideload |
| iOS | [Rebloom-0.1-ios-unsigned.ipa](https://github.com/dea7hsmiless/Sakura-Wars-V-Rebloom/releases/download/v0.1/Rebloom-0.1-ios-unsigned.ipa) | iOS 16.4+ arm64; unsigned, needs your own signing |

Also attached: [SHA256SUMS.txt](https://github.com/dea7hsmiless/Sakura-Wars-V-Rebloom/releases/download/v0.1/SHA256SUMS.txt).

## What works

- Boot, health screen, memory-card format, save and load
- Title menu, New Game, the opening film, and the opening chapter's dialogue
- Disc 1 (`SLUS_219.27`, English voices) and Disc 2 (`SLUS_219.30`, Japanese voices)
- 60 fps at 1080p on an RTX 3070 with about 14% CPU use
- Keyboard and gamepad bindings edited in the launcher; both files are re-read within a second
- Internal resolution 1×–4×, aspect 4:3 / 16:9 / Fill, picture looks and temporal de-dither
- Windows/Linux launchers: Sakura palette by default, **Classic (gold)** option
- Android/iOS: real analog stick, button/stick haptics, touch colour and opacity, on-screen
  controls On/Off, tap-to-advance, 16:9 / 4:3 / Fill, Bluetooth controllers
- Android/iOS launchers: sharp full-bleed key art and **1× internal resolution** by default

## Known limitations

- **Battles are untested.** Only the opening dialogue has been played.
- **Audio has not been judged by ear.** The sound chip produces real output; nobody has listened
  to the full mix.
- `16:9` is a presentation stretch. There is no verified Hor+ widescreen patch for this disc.
- **2×/3× upscaling on Windows** can show jagged edges or a ghost trail during fades. **1× is
  clean**; mobile defaults to 1×. A fix is planned for a later release.
- Android has not been run on a physical phone; the host-GPU emulator is the only device test.
  The iOS launcher and game boot on an iPhone, but touch/haptics and later scenes remain under
  test. The IPA raises Metal's storage-buffer limit to eight (the GS pass needs seven).
- HD texture overrides are supported; no texture pack is included.

## Install

### Windows

1. Extract the zip and run `Rebloom Launcher.exe`.
2. Open **Install** and import your Disc 1 ISO. It is copied into `discs\`, so the source can be
   deleted. Import Disc 2 as well for Japanese voices. Disc 2 is 7.17 GB — use NTFS or exFAT.
3. Press **Play**.

### Linux

Extract the tar.gz, or mark the AppImage executable and run it. Open **Install**, import Disc 1,
and press **Play**. The AppImage stores data in `~/.local/share/rebloom` (or `REBLOOM_HOME`).

### Android

Sideload the APK, open **Rebloom**, press **Import disc...**, choose your ISO, then **Play**.
The on-screen pad is on by default; **Settings → Controls** changes it, and **Settings → Display**
sets resolution and aspect.

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

## Legal

Fan project. Not affiliated with Sega or Red Entertainment. Sakura Wars and all related names,
characters, art and music belong to their owners. No game content is distributed here. The key
art and logo are used only to identify this non-commercial fan project. You must own the discs to
use the port.
