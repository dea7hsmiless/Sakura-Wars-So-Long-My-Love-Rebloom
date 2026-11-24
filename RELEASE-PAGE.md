A native build of **Sakura Wars V: So Long, My Love** (PlayStation 2), made by static
recompilation, for Windows, Linux, Android and iOS. This package contains the port only;
**you need your own discs.**

The game's own PlayStation 2 code is translated to C++ ahead of time and compiled into a
normal program. No emulator and no BIOS are involved. The game's CD/DVD server, its sound
engine (`Sakuya 2`) and the CRI ADX driver all run as guest code on an interpreted IOP; only
disc reads and module loading are answered by the runtime.

## Screenshots

![Rebloom Launcher](screenshots/launcher.png)

![Sakura Wars V running](screenshots/game.png)

## Downloads

| File | Size | Requirements |
| --- | --- | --- |
| Rebloom-0.1-Windows-x86_64.zip | 44.8 MB | Windows 10/11 x64, Direct3D 12 or Vulkan, your own disc image |
| Rebloom-0.1-Linux-x86_64.tar.gz | 33.6 MB | Linux x86-64, glibc 2.39+, Vulkan 1.1, X11 or Wayland |
| Rebloom-0.1-x86_64.AppImage | 32.8 MB | Linux x86-64, FUSE 2 (or `--appimage-extract-and-run`), Vulkan 1.1 |
| Rebloom-0.1-android-arm64.apk | 49.3 MB | Android 9+ arm64, Vulkan GPU with 7+ storage buffers; debug-signed sideload |
| Rebloom-0.1-ios-unsigned.ipa | 22.3 MB | iOS 16.4+ arm64; unsigned, needs your own signing |

SHA-256:

```
397d94fbdaf0984f72947793ea01dcfee120b3563d6b6aafd1184a0193e38b0f  Rebloom-0.1-Windows-x86_64.zip
cbf14569e28ea40cdbb4464c3cf34be23887b48f8230b17a55360198804c44e8  Rebloom-0.1-Linux-x86_64.tar.gz
fa98a18db8412aa19ef3f81287f63a0fc169da0b3f1d4ef848f344cc8ffd1973  Rebloom-0.1-x86_64.AppImage
098817ecca9a8712f88fe26a1547cc00e9b79aa8f19011a18c6802ba6c356832  Rebloom-0.1-android-arm64.apk
baba39d3deeaf1899f724a2f51e9426e1a2c73cf6a65b48351747dd8f3419c0c  Rebloom-0.1-ios-unsigned.ipa
```

`SHA256SUMS.txt` and the launcher source inside the Windows zip are also in the release.

## What works

- Boot, health screen, memory-card format, save and load
- Title menu, New Game, the opening film, and the opening chapter's in-game dialogue
- Disc 1 (`SLUS_219.27`, English voices) and Disc 2 (`SLUS_219.30`, Japanese voices) — the two
  discs differ by 28 bytes, so one build plays either
- 60 fps at 1080p on an RTX 3070 with about 14% CPU use
- Keyboard and gamepad bindings edited in the launcher; both files are re-read within a second
- Android/iOS: on-screen pad (d-pad/stick, four face buttons, shoulders, Start/Select), optional tap-to-advance, and Bluetooth controllers beside it
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
- **Android has not been run on a phone; iOS was launched on an iPhone but crashed at the Metal
  storage-buffer limit.** The Android game was run on an emulator with a host RTX 3070; the
  SwiftShader emulator cannot run its 7-storage-buffer compute pass. The first iOS device log
  found the limit; the current IPA raises it to eight (capped at the adapter's limit), but still needs a device
  retest. The touch overlay and Bluetooth controller path are untested on hardware. Unseen code
  cannot be translated on iOS, so some later scenes may not run there.

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

The shipped defaults are fullscreen + exclusive, 16:9, 3× internal resolution, Crisp + edges,
deinterlace off, VSync fifo, frame latency 2, Vulkan, and temporal de-dither on.

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
