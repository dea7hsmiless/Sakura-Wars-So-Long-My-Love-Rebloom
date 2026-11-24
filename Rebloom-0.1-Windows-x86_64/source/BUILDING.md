# Building it

Written for Windows 11 x64. Everything below was run on this machine on 2026-11-23.

This folder is the **source** part of the Rebloom 0.1 release. Paths here are relative to
this folder (`Build-Launcher.ps1`, `tools\`, `recomp\`). The prebuilt launcher and runner
are already at the release root: `Rebloom Launcher.exe` and `game\SakuraWarsV.exe`. You only need any of
this if you want to rebuild them.

You need **your own** copies of the two discs. Nothing here circumvents that.

## 1. Tools

| Tool | Why | Notes |
|---|---|---|
| MSYS2 (`bash` 4+) | `port.sh` and `setup.sh` are bash scripts | `C:\msys64\usr\bin\bash.exe` |
| LLVM-MinGW **UCRT** 23.x | the only compiler that works | `winget install MartinStorsjo.LLVM-MinGW.UCRT` |
| CMake 4.x + Ninja | build system | `winget install Kitware.CMake Ninja-build.Ninja` |
| Python 3 | the build scripts | `python -m pip install pycdlib` |
| .NET Framework 4 csc | builds the launcher | already in Windows |

Put LLVM-MinGW's `bin` **first** on `PATH`, then `/usr/bin` (MSYS2), then CMake and Python.
The `clang++` that ships with Visual Studio or Swift will fail the project's probe: it needs
`<format>`, libc++ and clang's vector builtins.

## 2. Get and patch the recompiler

```bash
git clone https://github.com/exoteric33/ps2-native-recomp C:/recomp/ps2-native-recomp
cd /c/recomp/ps2-native-recomp
git checkout 66528c8        # the commit this drop was tested against
git apply /path/to/recomp/rebloom-changes.patch
```

The patch adds `PS2_ASPECT` (`4:3`, `16:9`, `fill`) to the present pass. Without it the runner
only letterboxes 4:3 and there is no way to stretch.

## 3. Dependencies

```bash
bash scripts/setup.sh --native-only
```

**Windows trap:** `fetch_wgpu.sh`, `fetch_sdl2.sh` and `fetch_dxc.sh` unzip through `tar` when
`unzip` is missing. GNU tar cannot read zip, so setup dies with
`tar: This does not look like a tar archive`. Either install `unzip`, or download the three
archives and extract them with .NET:

| Target folder | Release |
|---|---|
| `third_party/wgpu-native` | `wgpu-windows-x86_64-gnu-release.zip`, v29.0.1.1 |
| `third_party/sdl2` | `SDL2-devel-2.32.10-mingw.zip` (copy `x86_64-w64-mingw32/*` up one level) |
| `third_party/dxc` | `dxc_2026_09_29.zip` (`dxcompiler.dll`, `dxil.dll` from `x64/`) |

`rebloom-changes.patch` does not depend on those versions; they are only what this drop used.

## 4. Disc image

`port.sh` wants one image, not a folder. If you only have an extracted disc:

```powershell
python tools\make-iso.py "D:\Sakura Wars ... (Disc 1)" "C:\recomp\work\ps2\disc1.iso"
```

The packer writes plain ISO 9660 level 1 with the volume id `100`, so the game's file lookups
work exactly as on the pressed disc. Verified round-trip: `SYSTEM.CNF`, `SLUS_219.27`,
`MODULE\MODULES.IRX`, `MODULE\IOPRP300.IMG` hash-identical to the source folder.

## 5. Entry points (the step that matters)

```bash
python tools/find-entry-tables.py games/sakura5/disc/SLUS_219.27 --out games/sakura5/entries.txt
```

Without this the exploring run halts after two frames. If you are using the copy of
`entries.txt` in `recomp/`, it is already the right 66 addresses — put it at
`games/sakura5/entries.txt` before the first `port.sh` run.

## 6. Build

```bash
bash scripts/port.sh sakura5 "C:/recomp/work/ps2/disc1.iso" --native-only
```

Stages: disc → executable → translate (239 units) → explore (8 runs of 3,600 frames) →
vector units (197 VU1 programs) → link. Expect a few minutes after the first translation.

The printed command is what the launcher runs. Test it before building the launcher:

```bash
build/native-sakura5/ps2run.exe --disc C:/recomp/work/ps2/disc1.iso --window \
  --game-dir games/sakura5 --memcard games/sakura5/play-english.ps2
```

## 7. Launcher

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File launcher\Build-Launcher.ps1
```

Produces `launcher\Rebloom Launcher.exe`. It reads and writes `launcher.ini` beside
itself, so the release folder can be moved as long as the toolkit path is updated under
**Game**. `Rebloom Launcher.exe --play` starts the game without the extra click.

Drop `hero.jpg` and `logo.png` into `launcher\art\` for the banner; without them it draws a
text title.

## 8. What the launcher passes

| Launcher setting | Runner |
|---|---|
| Aspect ratio | `PS2_ASPECT=4:3` / `16:9` / `fill` |
| Window | `--window` / `--fullscreen` |
| V-Sync | `PS2_PRESENT_MODE=fifo` (on) / `relaxed` (adaptive) / `immediate` (off) |
| Frames in flight | `PS2_FRAME_LATENCY=1..4` |
| Internal resolution | `PS2_SCALE=1..4` |
| Sharp 2D | `PS2_SHARP_2D=0..2` |
| Graphics API | `PS2_GPU_BACKEND=dx12` / `vulkan` |
| Frame pacing | `PS2_PACE=audio` (clock pacing is the default) |
| Controller menu | `PS2_MENU_CHORD=off` (default) / `on` / `guide` |
| Speed limit | `PS2_NO_LIMIT=1` (measurement mode; sound runs out of step) |
| Language | which disc image and which memory card |

If a value is not in this table, the launcher does not pretend to offer it.
