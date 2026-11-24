# Rebloom 0.1 — release notes

**2026-11-23** · Windows x64 · Sakura Wars V: So Long, My Love

First release. The game boots, renders, saves, and plays from the title screen into the
opening chapter's in-game dialogue, with the film decoder and the game's own CRI middleware
running as guest code.

## Highlights

- **It runs natively.** PlayStation 2 code is translated to C++ ahead of time and compiled
  into `game\SakuraWarsV.exe`. No emulator, no BIOS.
- **The middleware is real.** The game's own `cdvdfsv`, `Sakuya 2` and `CRI ADX 9.38` modules
  run on an interpreted IOP; only disc reads and module loading are answered by the runtime.
  `\LAYER0.CVM;1` resolves, which is where the earlier PS2 attempt stopped.
- **Both discs, one build.** `SLUS_219.27` and `SLUS_219.30` differ by 28 bytes, so the same
  executable plays the English-voice and Japanese-voice discs.
- **60 fps** at 1080p on an RTX 3070 with ~14% CPU use.
- **Launcher** with display, resolution, vsync, frame-latency, aspect, GPU-backend and
  controller-menu options, plus per-language memory cards.
- **Install imports your disc image.** When no disc is present, the **Install** button opens the
  importer directly. It copies the ISO into `discs\` with progress and cancel, then points the
  launcher at the copy, so the file you imported from can be deleted. The same thing is available
  as `Rebloom Launcher.exe --import <disc.iso>`. It reads the boot ELF (`SLUS_219.27` or
  `SLUS_219.30`) to choose the voice slot, checks free space and the filesystem, verifies the
  copied size, and accepts an ISO dragged onto the window. **Browse and a typed path use the same
  importer**, so every route ends with a copy in `discs\`. Disc 1 has English voices; **import
  Disc 2 as well for Japanese**.
- **Portable settings.** Paths inside the folder are stored relative to it, so moving or renaming
  the install keeps the imported disc and settings working.
- **Direct launch.** Settings -> Game -> When opened -> **Play immediately** skips the launcher and
  starts the game. Hold **Shift** (or pass `--launcher`) to open the window again.
- **Graphics presets.** Settings -> Graphics has **Performance** (1x, soft 2D, no V-Sync) and
  **Quality** (2x, sharpest 2D, V-Sync) presets; every value can still be changed individually.
  **Picture look** exposes the runtime's Crisp/Soft/Sharp scaling and smooth-edge AA, and **HD
  textures** can point at a folder of PNG overrides (no pack ships).
- **Full screen mode.** Settings -> Display can use **Borderless** (desktop mode, safe default) or
  **Exclusive** (changes the display mode). F11 toggles full screen.
- **Deinterlace.** Settings -> Display can blend the two fields of 480i film and scenes (default,
  smooth) or show one field (`PS2_NO_DEINTERLACE=1`, sharper but may comb).
- **De-dither.** Settings -> Advanced softens the game's dithered alpha fades/video with a light
  3x3 average (`game\blit-dedither.wgsl`). It is **on by default**; turn it off for sharper text.
- **Support -> Clear cache** removes the translated-code/VU caches without touching saves or replays.
- **Rebloom Launcher** is the app's name, with the key art as its window and file icon. The game
  window title is just the game name, and its title bar and taskbar use the same art.
- **DPI-aware** with a system-DPI manifest; the layout is checked at 125%, 150% and 200%.

## Known issues

| Issue | Detail |
|---|---|
| Battles untested | Only the opening dialogue has been played. Combat loads code the build has not seen; the first visit pauses while it is translated, then it is cached. |
| Audio not reviewed | The ADX driver runs and the chip produces output (peak 25,588, 51 of 69 measured seconds above 500 RMS), but nobody has judged the sound. |
| Aspect row is new | The in-game `Aspect` entry was checked by hand once. |
| No verified widescreen patch | `16:9` is a presentation stretch. PCSX2 has no patch for this disc's CRC (`5AC9154D`), so true Hor+ widescreen needs a game patch. |
| HD texture packs are external | The runtime accepts a folder of PNG overrides, but no pack is included. |
| Disc 2 untested past boot | It boots, detects layer 1 and reaches the health screen; the rest of the disc is unplayed. |
| One machine | Everything was measured on a Ryzen 5 5600 / RTX 3070 / Windows 11. |
| No upscaling extras | Texture filtering, anti-aliasing and frame generation are not implemented by the runtime. |

## Requirements

Windows 10/11 x64, Direct3D 12 or Vulkan, and your own discs. No game data is included.

## Credits

- **ps2-native-recomp** by exoteric33 — the recompiler and runtime this build uses.
- **ps2-web-recomp** by Samir Nuri — the code generator underneath it.
- **wgpu-native**, **SDL2**, **DirectX Shader Compiler**, **pycdlib** — see `THIRD-PARTY.md`.
- Launcher design follows the ReDUB launcher's model.

Fan project. Not affiliated with Sega or Red Entertainment.
