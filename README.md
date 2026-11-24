# Rebloom 0.1

Source and release assets for **Sakura Wars V: So Long, My Love — Rebloom**, a Windows static
recompilation built on `ps2-native-recomp`.

The playable package is `Rebloom-0.1-Windows-x86_64.zip` in this folder. It is intentionally not
tracked by Git; the source, launcher, documentation and screenshots are.

## Layout

| Path | What it is |
|---|---|
| `Rebloom-0.1-Windows-x86_64/source/` | launcher, build script and manifest, full rebuild source, toolkit patch |
| `Rebloom-0.1-Windows-x86_64/art/` | launcher artwork |
| `Rebloom-0.1-Windows-x86_64/README.md` | player-facing readme (also in the zip) |
| `RELEASE-PAGE.md` | release body, screenshots and checksum |
| `RELEASE-HANDOFF.md` | what was verified and what is still open |
| `LAUNCHER-AUDIT.md` | launcher findings and fixes |
| `screenshots/` | launcher and game images |
| `Verify-Rebloom.ps1` | checks the release zip against `SHA256SUMS.txt` |

## Build

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File Rebloom-0.1-Windows-x86_64/source/Build-Launcher.ps1 -NoShortcut
```

The game executable is built from the translated C++ in `source/recomp/`; see
`source/REBUILD.md` and `source/BUILDING.md`. The launcher source is a single C# 5 file compiled
by the .NET Framework 4 `csc.exe` that ships with Windows.

## Verify a download

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .\Verify-Rebloom.ps1
```

No game data, disc image or memory card is tracked. You need your own discs.
