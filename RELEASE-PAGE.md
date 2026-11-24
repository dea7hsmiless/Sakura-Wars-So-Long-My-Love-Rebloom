A native build of **Sakura Wars: So Long, My Love** (PlayStation 2), made by static
recompilation, for Windows, Linux, Android and iOS. This package contains the port only;
**you need your own discs.**

The game's own PlayStation 2 code is translated to C++ ahead of time and compiled into a
normal program. No emulator and no BIOS are involved. The game's CD/DVD server, its sound
engine (`Sakuya 2`) and the CRI ADX driver all run as guest code on an interpreted IOP; only
disc reads and module loading are answered by the runtime.

## Screenshots

![Rebloom Launcher](screenshots/launcher.png)

![Sakura Wars: So Long, My Love running](screenshots/game.png)

## Downloads

| File | Size | Requirements |
| --- | --- | --- |
| Rebloom-0.1-Windows-x86_64.zip | 36.5 MB | Windows 10/11 x64, Direct3D 12 or Vulkan, your own disc image |
| Rebloom-0.1-Linux-x86_64.tar.gz | 33.6 MB | Linux x86-64, glibc 2.39+, Vulkan 1.1, X11 or Wayland |
| Rebloom-0.1-x86_64.AppImage | 32.8 MB | Linux x86-64, FUSE 2 (or `--appimage-extract-and-run`), Vulkan 1.1 |
| Rebloom-0.1-android-arm64.apk | 50.0 MB | Android 9+ arm64, Vulkan GPU with 7+ storage buffers; debug-signed sideload |
| Rebloom-0.1-ios-unsigned.ipa | 21.0 MB | iOS 16.4+ arm64; unsigned, needs your own signing |

SHA-256:

```
f03adf533f56e90733ba0547e23f862847770b8710b24b93b117377f374f9a35  Rebloom-0.1-Windows-x86_64.zip
8d9a9372c3d3a65b6204a199a972e21bd54972f7902a9aaa6c135f23b5812a83  Rebloom-0.1-Linux-x86_64.tar.gz
07fcb11755ef32766b2cb273f1745666666ce22e7d9dfbae81a2654989b9feca  Rebloom-0.1-x86_64.AppImage
33606b015243fed6292971ec39172f3c0e0c0506bec9948ce0d7d9787ea417ee  Rebloom-0.1-android-arm64.apk
0f8f178eb5fc189817d24a922671cc22bf3bcfbc55cd71bd05aea683d4db7344  Rebloom-0.1-ios-unsigned.ipa
```

`SHA256SUMS.txt` is attached to the release. The full source and rebuild notes are in the GitHub repository; the Windows zip is the player package.

## What works

- Boot, health screen, memory-card format, save and load
- Title menu, New Game, the opening film, and the opening chapter's in-game dialogue
- Disc 1 (`SLUS_219.27`, English voices) and Disc 2 (`SLUS_219.30`, Japanese voices) — the two
  discs differ by 28 bytes, so one build plays either
- 60 fps at 1080p on an RTX 3070 with about 14% CPU use
- Keyboard and gamepad bindings edited in the launcher; both files are re-read within a second
- Android/iOS: real analog stick with stick/button haptics, configurable touch colour and opacity, on-screen controls On/Off, optional tap-to-advance, and Bluetooth controllers beside it
- Android/iOS display modes: 16:9 (fit), 4:3 (original), Fill (stretch)
- Android/iOS launchers: sakura palette, full-width key art, larger medium-weight text
- Windows/Linux launchers: sakura palette by default, with **Settings -> Display -> Launcher colors** offering **Classic (gold)**
- Linux: Windows-style 1200x800 launcher with the key-art hero banner and rail logo
- iOS: the same hero banner and rail logo, with opaque app icons

## What is not done yet

- **Battles are untested.** Only the opening dialogue has been played.
- **Audio has not been judged by ear.** The sound chip produces real output, but nobody has
  listened to it.
- The in-game menu's new `Aspect` row has been checked by hand once.
- `16:9` is a presentation stretch. PCSX2 has no patch for this disc's CRC (`5AC9154D`), so true
  Hor+ widescreen needs a game patch.
- Texture filtering/AA in the launcher covers the runtime's Crisp/Soft/Sharp looks and smooth-edge
  AA; no separate MSAA/anisotropic path yet.
- HD texture overrides are supported, but no texture pack is included.
- **2×/3× upscaling on Windows can show jagged edges or a ghost trail during fades.** 1× is
  clean; mobile defaults to 1×. A fix is planned for a later release.
- **Android has not been run on a physical phone.** The host-GPU emulator is the only device
  test. The iOS launcher and game boot on an iPhone, but touch/haptics and later scenes remain
  under test. The IPA raises Metal's storage-buffer limit to eight (the GS pass needs seven).

## Install

### Windows

1. Extract the zip anywhere, for example `C:\Games\Rebloom`.
2. Press **Install → Import disc image** (the **Install** button does this when no disc is present).
   It copies the ISO into `discs\`, so the original can be deleted. Import **Disc 1** for English
   voices and **Disc 2** as well for Japanese voices. A dragged `.iso` works too. Disc 2 is
   7.17 GB, so use NTFS or exFAT, not FAT32.
3. Run `Rebloom Launcher.exe` (or `Launch Rebloom.cmd`) and press **Play**.

### Linux

1. Extract the tar.gz anywhere, or mark the AppImage executable and run it.
2. Run `./Rebloom.sh` (or `Rebloom Launcher`), open **Install**, and import your Disc 1 ISO.
   The AppImage stores discs, saves and settings in `~/.local/share/rebloom`.
3. Press **Play**. Import Disc 2 too for Japanese voices.

The Linux game links against the system Vulkan loader and SDL2 is bundled.

### Android

1. Sideload `Rebloom-0.1-android-arm64.apk` (debug-signed).
2. Open **Rebloom**, press **Import disc...**, and choose your ISO; it is copied
   into app storage, so the source can be deleted.
3. Press **Play**. The on-screen pad is on by default; **Settings -> Controls** turns it off or on,
   and **Tap to advance** sends Cross on a short tap. Pair a Bluetooth controller in Android's
   Bluetooth settings to use it beside the pad. Import Disc 2 for Japanese voices.

### iOS

1. Sign `Rebloom-0.1-ios-unsigned.ipa` with your own certificate (Sideloadly, AltStore, or Xcode)
   and install it.
2. Open **Rebloom**, import Disc 1 through the Files picker, and press **Play**.
3. The on-screen pad and **Tap to advance** are under **Settings -> Controls**. Pair a Bluetooth
   controller in iOS Settings > Bluetooth to use it beside the pad.

## Settings

Settings live in `launcher.ini` beside the launcher (Windows/Linux) or `rebloom.ini` in the app's
Documents folder (iOS/Android). The game's own keys live in `game\data\keys.ini` and
`game\data\gamepad.ini`. Delete the launcher settings to go back to defaults.

The shipped defaults on Windows and Linux are fullscreen + exclusive, 16:9, 3× internal resolution,
Crisp + edges, deinterlace off, VSync fifo, frame latency 2, Direct3D 12 on Windows and Vulkan on
Linux, with temporal de-dither on. The Android and iOS launchers default to **1× internal
resolution**; the Windows and Linux launchers default to the **Sakura** palette;
**Settings → Display → Launcher colors** switches to **Classic (gold)** and applies when the
launcher reopens.

**Controls:** open **Settings → Controls** and click **Keyboard controls…** or **Gamepad
controls…**. Keyboard: click Change, then press the new key — arrows, Tab and Enter work.
Gamepad: choose the controller button for each game action; Start, Select and the triggers stay
standard, while L3 and R3 map the stick presses. The game re-reads both files within a second.

## Notes

- The launcher writes one memory card per voice language (`play-english.ps2`,
  `play-japanese.ps2`), so switching discs never overwrites the other save.
- **F1** opens the port's menu: quick save/load, picture look, aspect, resolution, keys, quit.
  **F11** is full screen. The controller chord for the menu is off by default; turn it on under
  Settings → Advanced if you play with a pad.
- Settings → Display offers **Exclusive** full screen (default, changes the display mode) or
  **Borderless** full screen (keeps the desktop mode).
- The game window's title bar is just the game name; the title bar and taskbar use the key art.
- Logs: the launcher's under Support; the game's in `game\data\logs\`.

## Updating

Replace the folder, keeping `discs\`, `game\data\` and `launcher.ini` if you want your saves and
settings. Nothing is downloaded or installed outside this folder.

## Credits

- **ps2-native-recomp** by exoteric33 — the recompiler and runtime this build uses.
- **ps2-web-recomp** by Samir Nuri — the code generator underneath it.
- **wgpu-native**, **SDL2**, **DirectX Shader Compiler**, **pycdlib** — see `THIRD-PARTY.md`.
- Launcher design follows the ReDUB launcher's model.

Fan project. Not affiliated with Sega or Red Entertainment. Sakura Wars and all related names,
characters, art and music belong to their owners. No game content is distributed here. The key
art and logo are used only to identify this non-commercial fan project.
