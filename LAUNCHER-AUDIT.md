# Launcher audit - 2026-11-23

Audited against the ReDUB launcher's behaviour (Game / Install / Settings / Support / About, a
220 px rail, polled footer status, steppers that save on click, Play that turns into Install when
something is missing) and tested by driving the real build through UI Automation.

## Fixed

| # | Finding | Fix |
|---|---|---|
| 1 | Dev-mode banner was empty: artwork only existed in the release tree. | Artwork ships beside the source launcher too. |
| 2 | Badge said "BUILD MISSING" when only the disc was absent. | Badge and subtitle name the missing item. |
| 3 | **Check build** wrote to the Support log but never opened Support. | It switches to Support and prints runner, folders, discs, mode. |
| 4 | Voice language appeared twice with different names. | Both say **Voices**. |
| 5 | Release fell back to a hardcoded `C:\recomp\work\ps2\...` disc. | An explicit choice wins, then `discs\`, then nothing in portable mode. |
| 6 | **Launcher crashed at startup** after the banner work (`BeginInvoke` before the window handle). | Removed; failures write `startup-error.txt`. |
| 7 | Banner cropped and double-logoed, hiding faces. | Whole `header-920x430` art, native 1886:834 ratio, edge-to-edge. |
| 8 | Maximised, the banner was height-capped and clipped. | Pages capped at 1280 px and centred; the banner keeps full height at any size. |
| 9 | Page column kept its default 200 px size at startup because the resize handler fired too early. | Centring is done with host padding, so the layout engine sizes it from the first show. |
| 10 | "Support & activity" lost its `&`. | Labels ignore mnemonics. |
| 11 | Launch-command box and **Copy command** were my addition; ReDUB has neither. | Removed. |
| 12 | Setup page showed a "Toolkit folder" field, which a release user should never see. | Field removed; the runner path is read-only, and a "Choose disc image..." action replaces it. |
| 13 | Page named "Setup" while ReDUB calls it "Install". | Renamed, with ReDUB's help text and a `Choose disc image...` button. |
| 14 | Play button said "Build missing" when not ready; ReDUB shows "Install". | Shows **Install** and opens the Install page. |
| 15 | Closing the launcher while the game ran left it orphaned with no word. | Asks first; the game keeps running if confirmed. |
| 16 | The window and taskbar showed .NET's generic four-pane icon, even though the exe had the art icon. | The form now loads `art\icon.ico` itself; the game runner sets the same art on its own window. |
| 17 | A packaged build could display the developer path `C:\recomp\...` on the Install page. | Portable builds show `game\SakuraWarsV.exe`; the absolute path is checkout-only. |
| 18 | Launching `--play` with the wrong voice disc installed started with an empty disc path. | It opens Install and names the missing disc instead. |
| 19 | The app was called "Rebloom" and its exe was `Rebloom.exe`. | App, window, shortcut and file are **Rebloom Launcher**; the port is still Rebloom. |
| 20 | The game window title carried "F1 = menu" and live fps/CPU/GPU/RAM/audio stats. | A launcher-supplied name is the whole title; stats are no longer appended. |
| 21 | Imported disc paths were written absolute, so a moved folder kept a stale path. | Paths under the install are stored relative and resolved against the launcher folder. |
| 22 | Import could fill the destination disk or accept a truncated copy. | It checks free space, then verifies the copied byte count and removes a bad copy. |
| 23 | Custom buttons had no focus ring, accessible role or default-button support. | They implement `IButtonControl`, expose a push-button role, and draw keyboard focus. |
| 24 | The banner reloaded both artwork files on every paint. | Art is loaded once and disposed with the panel. |
| 25 | Switching pages could flash the previous controls through. | Pages and the content host are double-buffered. |
| 26 | The launcher had no DPI manifest, so Windows bitmap-stretched it above 100%. | System-DPI manifest added; layout checked at 125%, 150% and 200% (the last is capped to fit a 1080p screen). |
| 27 | Support had no way to copy paths for a bug report, and no shortcut to the game logs. | Added **Copy diagnostics** and **Open logs**. |
| 28 | Adding a disc meant choosing between Browse and Import, and Play only opened Install. | Import is now the primary action; with no disc, the **Install** button opens the importer directly. |
| 29 | The Disc 2 requirement for Japanese voices was too easy to miss. | Install, Home and the Game settings page now say that Disc 2 must be imported too. |
| 30 | There was no way to start the game without the launcher. | Settings -> Game -> **When opened -> Play immediately**; hold **Shift** or pass `--launcher` to show the window. |
| 31 | Graphics options were spread across rows with no starting point. | Added **Performance** and **Quality** presets, leaving each value editable afterwards. |
| 32 | Import trusted the filename, so a generically named Disc 2 could overwrite the English slot. | The importer reads `SLUS_219.27`/`SLUS_219.30` from the ISO and asks only if that fails. |
| 33 | A 7 GB import onto FAT32 failed after copying started. | The importer rejects over-4-GB files on FAT32 and says to use NTFS/exFAT. |
| 34 | Adding a disc meant opening Install and finding the importer. | An `.iso` can be dragged onto the launcher; Install is the default action when no disc is present. |
| 35 | First-run stutter could only be fixed by deleting folders by hand. | Support shows the code/VU cache size and offers **Clear cache** / **Open cache**. |
| 36 | The existing smooth-edge AA and texture override support were not exposed. | **Picture look** exposes Crisp/Soft/Sharp with optional edge AA; **HD textures** selects a PNG override folder. |

## Open

| # | Finding |
|---|---|
| 37 | **Add shortcut** points at whichever launcher built it, so a source-built shortcut can outlive a moved folder. |
| 38 | The rail badge is the full wordmark squeezed into 188x84; a square `mark.png` would read better. |
| 39 | Only Windows 11 at 100% has been used for real; DPI layouts were checked with the `--ui-scale` QA flag. |
| 40 | True Hor+ widescreen needs a game patch; PCSX2 has none for this disc's CRC (`5AC9154D`). |

## Verified after the fixes

- Launcher starts, banner fills edge to edge, badge reads `BUILD FOUND / DISC MISSING`.
- Window title is `Sakura Wars V: So Long, My Love - Rebloom Launcher`; the title bar and taskbar show the key art.
- **Install** shows the bundled runner as `game\SakuraWarsV.exe`, both disc rows, the picker and Import.
- With only Disc 1 installed, switching Voices to Japanese shows `BUILD FOUND / DISC MISSING`,
  names `Disc 2 (SLUS_219.30)`, and Play is replaced by Install.
- The settings rows write through to `launcher.ini`.
- A 3.6 GB import completes, the ISO lands in `discs\`, and the game boots from that copy.
- An import writes `disc_en=discs\...iso`; renaming the launcher folder still resolves it.
- Support shows **Copy diagnostics** and **Open logs**; diagnostics land on the clipboard.
- The home, Install and Settings pages were rendered at 100%, 125%, 150% and 200%; all controls
  stay reachable, with 200% capped to the screen width on a 1080p display.
- The packaged zip extracts and boots `game\SakuraWarsV.exe` from `discs\` with no configuration.
- The game window title is just the game name; the window icon is the key art.
- `bypass=1` starts the game and closes the launcher; `--launcher` keeps the window open. Tested both.
- The Install page's four action buttons fit on one row at the default 1200 px width.
- The Graphics presets write `scale`, `sharp`, `look`, `vsync`, `latency`, `backend`, `pacing` and `limit`.
- A generic Japanese ISO containing `SLUS_219.30` imported as `disc_jp` with `language=jp`.
- Support reports the cache size and can delete `game\data\ee-live` and `vu1-live` without touching saves.
