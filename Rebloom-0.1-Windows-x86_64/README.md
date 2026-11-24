# Rebloom

**Sakura Wars V: So Long, My Love — Rebloom** — a native Windows build of the PlayStation 2
game, made by static recompilation.

Version 0.1 — 2026-11-23.

---

## What you need

- Your **own** PlayStation 2 discs of *Sakura Wars: So Long, My Love*. Both are supported:
  - Disc 1 — `SLUS_219.27`, English voices
  - Disc 2 — `SLUS_219.30`, Japanese voices
- A disc image of one or both, as a plain `.iso`. If you only have an extracted folder or a
  `.bin/.cue`, see `source\BUILDING.md` for the packer.
- Windows 10 or 11, 64-bit.
- A GPU with Direct3D 12 or Vulkan. Tested on an RTX 3070; it does not need a fast one.

**No game data is included in this download.** No disc image, no textures, no audio. The
program contains only translated code and the runtime that runs it.

## Install

1. Extract this folder anywhere, for example `C:\Games\Rebloom`.
2. Press **Import disc image…** on the Install page — when no disc is present, the **Install**
   button does this for you. It copies the ISO into `discs\`, so the file you imported from can
   be deleted afterwards. **Browse and a typed path also copy the file into `discs\`**; there is no
   way to leave the game pointing at an external image. Use Disc 1 for English voices; **import
   Disc 2 as well for Japanese voices.**
3. Run **Rebloom Launcher.exe** (or `Launch Rebloom.cmd`, which rebuilds it from source if it is missing)
   and press **Play**.

The game itself is `game\SakuraWarsV.exe` — the translated game plus its runtime. The launcher
starts it with your settings; you can also run it directly:

```powershell
game\SakuraWarsV.exe --disc "discs\your-disc.iso" --window --game-dir game\data --memcard game\data\play-english.ps2
```

If you would rather point at an image somewhere else, use **Install** in the launcher.

You can also drag an `.iso` onto the launcher to import it. Disc 2 is 7.17 GB, so `discs\` must be
on NTFS or exFAT; a FAT32 drive cannot hold it.

**Skip the launcher:** open **Settings → Game → When opened** and choose **Play immediately**. Hold
**Shift** while double-clicking the launcher (or run `Rebloom Launcher.exe --launcher`) to show the
window again. The same page has **Performance** and **Quality** graphics presets.

**Graphics:** Settings → Graphics has **Picture look** (Crisp/Soft/Sharp, each with optional
smooth-edge AA) and **Text and menus** filtering. An optional **HD textures** folder can load PNG
overrides; no texture pack is included.

**Full screen:** Settings → Display has **Windowed/Fullscreen** and **Fullscreen mode** —
**Borderless** (the safe default, keeps the desktop mode) or **Exclusive** (changes the display
mode, like a classic full-screen game). **F11** toggles full screen.

**Deinterlace:** Settings → Display → **Deinterlace**. PS2 films and some scenes are 480i; the
default **Blend** joins two fields, which is smooth but softens motion. **Off** shows one field
(sharper, but can show comb edges).

**De-dither:** Settings → Advanced → **De-dither**. The game dithers alpha fades and some video;
this optional 3×3 average softens that pattern, at the cost of a little detail. Leave it off for
the sharpest text.

## Controls

| Key | Action |
|---|---|
| **F1** | the port's menu: quick save/load, picture, resolution, keys, quit |
| **F11** | full screen |
| **F5 / F8** | quick save / quick load |
| **Esc** | Start (the game's own pause) |
| **W A S D**, mouse, Space, E, Q, F, Shift | the game's buttons |
| A controller | works, including the analog sticks |

The game's own memory card saves work and are kept in `game\data\*.ps2` — one card per
voice language, so the two never overwrite each other.

## What works

| | |
|---|---|
| Boot, health screen, memory-card format/save/load | yes |
| Title menu, New Game, opening film, in-game dialogue | yes |
| Disc 1 (English voices) | yes |
| Disc 2 (Japanese voices) | boots and plays; dual-layer reads work |
| Texture, UI, film decoding (IPU) | yes |
| Speed (RTX 3070, 1080p) | 60 fps with vsync, ~14% CPU |
| Audio | produced and measured; quality not yet reviewed by ear |

## What is not done yet

- **Battles are untested.** Only the opening chapter's dialogue has been played.
- **Audio has not been listened to.** The CRI ADX driver runs and the sound chip produces
  real output, but nobody has checked how it sounds.
- The in-game menu's `Aspect` row is new and has only been checked by hand once.
- Some launcher options do not exist yet (texture filtering, anti-aliasing, frame generation):
  the runtime does not implement them, so they are not offered.

## If something goes wrong

- **Support → Check build** prints every path the launcher is using.
- **Support** shows the launcher log; the game's own logs are written to
  `game\data\logs\`.
- **Support → Clear cache** deletes the translated-code/VU caches if a run behaves strangely;
  saves and replays are untouched.
- "Build missing" means `game\SakuraWarsV.exe` is not beside the launcher.

## Legal

Fan project. Not affiliated with Sega, Red Entertainment or the owners of Sakura Wars.
Sakura Wars and all related names and characters are trademarks of their respective owners.
You must own the discs; no game content is distributed with this program. See `LICENSE` and
`THIRD-PARTY.md`.
