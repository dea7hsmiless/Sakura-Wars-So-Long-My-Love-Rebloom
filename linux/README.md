# Sakura Wars V: So Long, My Love — Rebloom (Linux)

A native Linux x86-64 build of the PS2 game *Sakura Wars V: So Long, My Love*,
made by static recompilation. It is not an emulator and it contains no game
data. You need your own legally acquired disc image.

This package is the launcher and the recompiled runtime. The game data comes
from your disc: import Disc 1 for English voices, Disc 2 for Japanese voices,
or both.

## Requirements

- Linux x86-64, glibc 2.39 or newer (Ubuntu 24.04, Fedora 40, Arch and similar)
- A Vulkan 1.1 driver and a working desktop (X11 or Wayland)
- About 4 GB free for each imported disc image
- AppImage: FUSE 2, or run with `--appimage-extract-and-run`

The package carries SDL2 beside the game. The rest of the libraries (Vulkan
loader, X11/Wayland, audio) come from your distribution.

## Run

```
./Rebloom.sh
```

or run `Rebloom Launcher` directly. On the first run, open **Install** and
import your Disc 1 ISO. The launcher copies the image into `discs/`; after
that, the copy you imported from can be deleted. **Play** starts the game.

### AppImage

```
chmod +x Rebloom-0.1-x86_64.AppImage
./Rebloom-0.1-x86_64.AppImage
```

The AppImage cannot write inside itself, so discs, saves and `launcher.ini`
live in `~/.local/share/rebloom`. Set `REBLOOM_HOME=/some/folder` to keep them
elsewhere. If FUSE 2 is unavailable, run it with
`--appimage-extract-and-run`. The tar.gz stays portable: its data lives beside
the launcher.

Japanese voices require Disc 2. Import both discs and use the voice switch on
the Play page.

### Command line

```
./Rebloom.sh --import /path/to/disc.iso
./Rebloom.sh --play
./Rebloom.sh --launcher
```

`--import` still copies the image into `discs/`. `--play` starts immediately
when a disc is already imported. Hold `--launcher` to force the window even if
"Play immediately" is set in Settings.

## Settings

Settings are saved in `launcher.ini` beside the launcher and apply on the next
game start.

- **Display:** window/fullscreen, borderless/exclusive, 4:3 or 16:9 stretch,
  VSync, frame latency.
- **Graphics:** picture look (Crisp/Soft/Sharp, with optional edge smoothing),
  render scale, deinterlace, GPU backend.
- **Controls:** keyboard and gamepad binding editors. Changes are written to
  `game/data/keys.ini` and `game/data/gamepad.ini` and apply when the game has
  the focus again.
- **Advanced:** De-dither (on by default), open-on-play, clear game cache.

The shipped defaults are fullscreen (exclusive), 16:9 stretch, 3x render scale,
Crisp + edges, deinterlace off, VSync fifo, frame latency 2, Vulkan, and
temporal de-dither on.

**De-dither** uses an 8×8 pattern-aware average plus the previous frame
(temporal) to smooth alpha fades and video transitions, while backing off near
text and real edges. It is on by default. The 4×4 and 8×8-only shaders remain
beside it as fallbacks. It cannot recover gradients the PS2 never stored.

Aspect 16:9 is a presentation stretch. The game has no verified Hor+ widescreen
patch for this disc, so the original 4:3 image is what the game renders.

## Controls

Settings -> **Controls** edits the keyboard and gamepad bindings (Change, then
press the new key; gamepad buttons are chosen from a list). The files can also
be opened and edited by hand.

- **W A S D** — left stick
- **Mouse buttons / Space / E / Q / F / Shift** — the game's buttons
- **Esc** — Start
- **F1** — key card and remapping
- **F2** — cycle picture styles
- **F5 / F8** — quick save / quick load
- **F11** — full screen
- A game controller recognized by SDL works too.

## Files

```
Rebloom Launcher        the launcher (self-contained)
Rebloom.sh              convenience wrapper
game/SakuraWarsV        the recompiled game
game/blit-dedither.wgsl the de-dither shader
game/data/              settings, memory cards, logs, translation caches
discs/                  imported disc images (never shipped)
launcher.ini            your settings
```

## Notes

- Parts of the game the build did not see are translated while you play. The
  first time can be slow; the result is cached for the next start.
- Memory cards are files in `game/data/`, not PS2 memory cards.
- Nothing is uploaded. There is no telemetry.

## Legal

This is a fan project. *Sakura Wars* is a trademark of SEGA. No game code or
data is included in this package; the recompiled program is built from the
user's own disc. Do not redistribute imported disc images.
