# Rebloom 0.1 — release notes (Linux)

**2026-11-23** · Linux x86-64 · Sakura Wars V: So Long, My Love

First Linux release. The game boots, renders and plays from the title screen
into the opening chapter's in-game dialogue, with the film decoder and the
game's own CRI middleware running as guest code. This is the same recompiled
program as the Windows build, linked against SDL2 and Vulkan on Linux.

## Highlights

- **Native, not emulated.** PlayStation 2 code is translated to C++ ahead of
  time and compiled into `game/SakuraWarsV`. No emulator, no BIOS.
- **Both discs, one build.** `SLUS_219.27` and `SLUS_219.30` differ by 28 bytes,
  so the same executable plays the English-voice and Japanese-voice discs.
- **Import-first launcher.** *Play* and *Install* both copy the chosen ISO into
  `discs/`, with progress and cancel, so the source file can be deleted. The
  launcher reads the boot ELF to choose the voice slot, checks free space and
  the filesystem, and verifies the copied size. `--import` uses the same path.
- **Japanese voices.** Import Disc 2 and switch the voice language on the Play
  page.
- **Settings.** Window/fullscreen, borderless/exclusive, 4:3 or 16:9 stretch,
  VSync, frame latency, picture look, render scale, deinterlace, GPU backend.
  Defaults are fullscreen exclusive, 16:9, 3x, Crisp + edges, deinterlace off.
- **Controls.** Settings -> Controls edits the keyboard and gamepad bindings in
  the launcher. The game reads the files again when its window has the focus.
- **De-dither on by default.** An 8x8 pattern-aware average plus the previous
  frame smooths the PS2's dithered alpha fades and video transitions; it backs
  off near text and edges. The 4x4 and 8x8-only shaders remain as fallbacks.
- **Portable layout.** `launcher.ini`, `discs/` and `game/data/` live beside the
  launcher. Paths inside the folder are stored relative to it.
- **No telemetry.** Nothing is uploaded.
- **AppImage.** A single-file build stores discs, saves and `launcher.ini` in
  `~/.local/share/rebloom` (or `REBLOOM_HOME`); the tar.gz stays portable.

## Known issues

| Issue | Detail |
|---|---|
| Battles untested | Only the opening dialogue has been played. Combat loads code the build has not seen; the first visit pauses while it is translated, then it is cached. |
| Audio not reviewed | The ADX driver runs and produces output, but nobody has judged the sound on Linux. |
| No verified widescreen patch | `16:9` is a presentation stretch. PCSX2 has no patch for this disc's CRC (`5AC9154D`), so true Hor+ widescreen needs a game patch. |
| Disc 2 untested past boot | It boots, detects layer 1 and reaches the health screen; the rest of the disc is unplayed. |
| One Linux machine | Built and boot-tested on Ubuntu 24.04 under WSL 2 with a Vulkan-capable GPU. Other distributions and handhelds still need testing. |
| HD texture packs are external | The runtime accepts a folder of PNG overrides (`game/textures`), but no pack is included. |
| glibc requirement | The launcher and game are built against glibc 2.39 (Ubuntu 24.04 or newer). |

## Requirements

Linux x86-64, glibc 2.39+, Vulkan 1.1, X11 or Wayland, and your own discs. No
game data is included. The AppImage needs FUSE 2, or run it with
`--appimage-extract-and-run`.

## Credits

- **ps2-native-recomp** by exoteric33 — the recompiler and runtime.
- **ps2-web-recomp** by Samir Nuri — the code generator underneath it.
- **wgpu-native**, **SDL2** — see `THIRD-PARTY.md`.
- Launcher design follows the ReDUB launcher's model.

Fan project. Not affiliated with Sega or Red Entertainment.
