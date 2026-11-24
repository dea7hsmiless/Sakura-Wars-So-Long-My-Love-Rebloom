# Build notes — what was changed and why

Everything here was measured on 2026-11-23 on a Ryzen 5 5600 / 32 GB / RTX 3070, Windows 11.
Upstream ps2-native-recomp at commit `66528c8`.

## 1. The 66-pointer table (the fix that mattered)

First build: translation succeeded (178 units), the runner linked, and the exploring run halted
after **two frames**:

```
[ee] no translated code at 0x00539780 (ra 0x00141F7C)
[ee] stopped after 2 frames, 14214163 cycles
```

`ra` was the same for every round, and each round the jump target moved forward:
`0x539480 → 0x5395E0 → 0x539690 → 0x539780 → …`, one per explore round.

The target is inside the single RWX load segment (`vaddr 0x120000`, `filesz 0x434580`), so the
bytes are in the ELF — but the block is reached only through a table of function pointers at
`0x541F90`:

```
0x00541F90: 00539480 005395E0 00539690 00539780 00539DF0 00539F20 0053A140 …
            … 00541DC0 00541EF0 00000000
```

66 pointers, all into `0x539480..0x541EF0` — 35 KiB of ordinary MIPS functions (`lui`, `addiu sp`,
`lwc1` prologues, not thunks). The translator classifies the block as data because nothing in
the code refers to those addresses.

Seeding all 66 as entry points (`games/sakura5/entries.txt`) took the same run to the full
3,600-frame limit with **zero** misses. That is the difference between "halts in 2 frames" and
"plays to in-game dialogue".

`tools/find-entry-tables.py` reproduces the discovery: `--table 0x541F90` prints exactly those
66 addresses, and they match `recomp/entries.txt` byte for byte.

This is a general gap, not a one-off: any pointer-table dispatch (middleware API tables are the
usual case) is invisible to static analysis. The tool is the workaround.

## 2. The two discs

| | Disc 1 | Disc 2 |
|---|---|---|
| Boot ELF | `SLUS_219.27` | `SLUS_219.30` |
| Label | English Voice Over | Japanese Voice Over |
| Layers | single (`LAYER0.CVM`, 3,825,092,608 B) | dual (`LAYER0.CVM` 3,829,121,024 B + `LAYER1.CVM` 3,824,932,864 B) |
| ELF size | 4,409,432 | 4,409,432 |

The two ELFs differ by **28 bytes**:

* one length byte at file offset `0x3E4A06` (`0x16` vs `0x18`),
* a full-width title string at `0x3E4AD6` (`Ｓａｋｕｒａ　ＷａｒｓＳｏ…` vs `…Ｗａｒｓ＊Ｓｏ…`),
* the serial digits in the last two bytes.

The code is identical, so **one build boots both discs**. Verified by booting Disc 2 with the
build made from Disc 1: `[disc] … 10 files, 3760928 sectors, layer 1 at 1882768`,
`[elf] read cdrom0:\SLUS_219.30;1 from disc`, `[cdvdfsv] search \LAYER0.CVM;1 -> found`, and a
complete 1,800-frame run with no missing code.

Text stays English on both; the US release pairs the English text with two voice tracks on two
discs. Japanese text would need the Japanese release, which this project does not have.

## 3. Disc image

The only Disc 1 copy available was an extracted folder, and `port.sh` needs an image.
`tools/make-iso.py` packs it as ISO 9660 level 1 with volume id `100` (Disc 2's id). pycdlib
orders directory records alphabetically, so the archives land first and the boot ELF late in the
image — harmless, because the game resolves files through the filesystem.

Round-trip check: `SYSTEM.CNF`, `SLUS_219.27`, `MODULE\MODULES.IRX`, `MODULE\IOPRP300.IMG`
hash-identical to the source folder; the toolkit's own `disc.py` reads it.

## 4. `PS2_ASPECT`

Upstream letterboxes to 4:3, or to 16:9 when `--widescreen` is passed; there is no stretch.
`rebloom-changes.patch` adds `PS2_ASPECT=4:3 | 16:9 | fill` and a matching entry in the in-game
F1 menu, applied in the present pass only, so the
game's picture is untouched. `fill` uses the whole window and changes the picture's shape.

## 5. Windows environment traps

* `fetch_wgpu.sh` / `fetch_sdl2.sh` / `fetch_dxc.sh` unzip with `tar` when `unzip` is absent.
  GNU tar cannot read zip; setup dies with `tar: This does not look like a tar archive`.
  Extracted with .NET's `ZipFile` instead, after checking the pinned SHA-256 values.
* `cxx.sh` probes for clang with `<format>`, libc++ and vector builtins. Visual Studio's clang
  and Swift's clang both fail it. LLVM-MinGW UCRT 23.1.6 passes.
* The repository's PATH assumptions are Unix-flavoured; run the scripts from MSYS2 bash 5.x with
  LLVM-MinGW's `bin` first, and set `CC=clang` so CMake does not pick a MinGW gcc for C files.

## 6. Timing

| Run | Frames | Wall time | Rate |
|---|---|---|---|
| Disc 1, headless, frame capture every 600 | 15,000 | 128 s | ~117 frames/s (≈1.95× real time) |

That is a floor: it includes PNG capture. No windowed measurement has been taken yet, and no
audio has been listened to.

## 7. Not done

* Battles and later chapters (new code paths, possibly new pointer tables).
* Save/load round trip through the in-game menu.
* Audio quality (the ADX driver initialises and prints; nobody has heard it).
* Disc 2 beyond boot and the health screen.
* Speed tuning beyond the knobs the launcher exposes.
