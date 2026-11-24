# Rebloom 0.1 — release handoff

Prepared 2026-11-23. **Nothing has been published.**

## Where it is

| Asset | Path | Size |
|---|---|---|
| Release folder | `Desktop\Rebloom-0.1-release\` | — |
| Windows zip | `Desktop\Rebloom-0.1-release\Rebloom-0.1-Windows-x86_64.zip` | 44,735,493 B |
| Extracted tree | `Desktop\Rebloom-0.1-release\Rebloom-0.1-Windows-x86_64\` | 150.7 MB |
| Source drop (working copy) | `Desktop\Rebloom-0.1-release\Rebloom-0.1-Windows-x86_64\source\` | — |

Zip SHA-256: `d918abe6bdbe59076273a16b8c2482a012d9c07c0e7d6ced05d5ff8c70208bdd`

## What was verified for this package

- **The zip itself was extracted to a clean folder (519 files, no ISO) and booted.** With Disc 1
  placed in `discs\` as `Disc 1 (English).iso`, `Rebloom Launcher.exe --play` started the game:

  ```
  [run] started with: SakuraWarsV.exe --disc "Disc 1 (English).iso" --game-dir data --memcard play-english.ps2 --window
  [disc] ...\discs\Disc 1 (English).iso: 11 files, 1870316 sectors, layer 1 at 0
  PASS: packaged zip boots the game
  ```

- An import writes `disc_en=discs\...iso`; renaming the launcher folder still resolves it. The
  importer reads `SLUS_219.27`/`SLUS_219.30` from the ISO, asks if the name and serial are both
  unclear, checks free space, rejects an over-4-GB file on FAT32, and verifies the copied size.
- Settings -> Game -> **When opened -> Play immediately** starts the game and closes the launcher;
  `--launcher` keeps the window open. Both paths were tested.
- Settings -> Graphics -> **Performance/Quality** presets write the resolution, 2D filter, picture
  look, V-Sync, frames-in-flight, graphics API, pacing and speed-limit values together.
- **Fullscreen mode** offers Borderless or Exclusive. Exclusive was tested at 1920x1080 on the
  RTX 3070 and logs `[window] exclusive fullscreen 1920x1080`.
- **Picture look** exposes the runtime's Crisp/Soft/Sharp scaling with optional smooth-edge AA;
  **HD textures** points at an optional folder of PNG overrides. No texture pack is included.
- **De-dither** is available for the game's dithered alpha fades; it loads
  `game\blit-dedither.wgsl` through `PS2_BLIT_SHADER` and was boot-tested.
- Support reports the code/VU cache size and can clear or open it without touching saves.
- An ISO can be dragged onto the launcher to import it.
- The home, Install and Settings pages were rendered at 100%, 125%, 150% and 200%; all controls
  stay reachable. At 200% on a 1080p screen the launcher caps the UI scale to fit the display.
- Microsoft Defender scanned the final zip: **no threats** (`MpCmdRun -Scan -ScanType 3`).
- The game window title is now just `Sakura Wars V: So Long, My Love - Rebloom`; the title bar,
  taskbar and exe icon use the key art. The launcher window title ends in `Rebloom Launcher`.
- The launcher finds `game\SakuraWarsV.exe` and `discs\*.iso` with no configuration (portable
  mode), and shows the bundled runner as `game\SakuraWarsV.exe` rather than a developer path.
- With only Disc 1 present, choosing Japanese voices reports `BUILD FOUND / DISC MISSING`, names
  Disc 2 (`SLUS_219.30`), and turns Play into Install instead of booting the English disc.
- Import copies a disc image into `discs\`: 20 MB, 1 GB and 3.6 GB were tested, and the game
  booted from the imported 3.6 GB copy. `--import "<disc.iso>"` does the same without the window.
- Every launcher option writes through and reaches the runner: aspect, window, V-Sync, frame
  latency, resolution, sharp 2D, graphics API, frame pacing, controller menu, speed limit,
  voice language. Verified from the runner's own `[gpu] display:` and `[env]` lines.
- The game exe imports only `SDL2.dll` plus system DLLs; `dxcompiler.dll`/`dxil.dll` ship for
  D3D12 shader compilation.

## What is NOT verified

| Item | Status |
|---|---|
| Battles / chapter 1 combat | never reached |
| Audio judged by ear | never listened to (levels measured only) |
| Save/load round trip through the in-game menu | not run |
| In-game F1 menu driven by hand | aspect row checked once |
| Second machine / clean Windows account | not tested |
| Disc 2 past boot | boots and detects layer 1; rest unplayed |

## Before publishing

1. Decide the repository and tag: `v0.1`, with `Rebloom-0.1-Windows-x86_64.zip` attached.
2. Upload `screenshots\launcher.png` and `screenshots\game.png` as release assets, then add the
   real zip download URL and screenshot URLs to `RELEASE-PAGE.md`.
3. Re-check the zip hash after any change, and update `SHA256SUMS.txt` and `LABEL.txt`.
4. `store-icon-512.png` is included for a store or release page.
5. The package ships `game\SakuraWarsV.exe`, which contains code translated from the disc. That
   matches how ReDUB ships `mcdub3remix.exe`, but it is the one distribution decision worth
   making deliberately.

## Rebuilding the package

```powershell
# launcher
powershell -NoProfile -ExecutionPolicy Bypass -File source\Build-Launcher.ps1 -NoShortcut

# game (needs your own ISO and the toolkit)
bash scripts/port.sh sakura5 "<disc1.iso>" --native-only
# then copy build/native-sakura5/ps2run.exe to game\SakuraWarsV.exe and the DLLs beside it
```

`source\recomp\rebloom-changes.patch` contains the toolkit changes, including the window-title
and window-icon fix. `game\icon.bmp` is loaded by the runner for its title-bar and taskbar icon.
