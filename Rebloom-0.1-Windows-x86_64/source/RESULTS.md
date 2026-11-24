# PS2 track, second route — `ps2-native-recomp`

Started 2026-11-23. This is a **separate attempt** from `HANDOFF.md` (PS2Recomp).
Nothing in `HANDOFF.md` is superseded by this file; the PS2Recomp tree is untouched.

## Why this route

`ps2-native-recomp` (exoteric33, public 2026-10-28, built on snuri00/ps2-web-recomp)
does not HLE the IOP. It runs the game's own IOP driver modules on an interpreter
and answers only disc reads and module loading directly. That is the exact seam
that consumed the PS2Recomp attempt (SID `0x80000597`, `sceCdSearchFile`, CRI
DVCI/ROFS), so it is the first thing worth testing.

The runtime contains **no CRI/ROFS/CVM-specific code** — verified by grep. If this
game works, it works through the generic IOP path.

## Environment (this machine)

| Thing | Value |
|---|---|
| CPU / RAM / GPU | Ryzen 5 5600, 32 GB, RTX 3070 |
| Toolkit | `C:\recomp\ps2-native-recomp`, clean at `66528c8` (2026-11-23) |
| Toolchain | LLVM-MinGW UCRT 23.1.6 (`clang 23.1.6`, target `x86_64-w64-windows-gnu`) |
| Shell | MSYS2 bash 5.3.20 at `C:\msys64` |
| CMake / Ninja / Python | 4.x, WinLibs ninja, CPython 3.10.11 |
| Build dir | `build/tools`, `build/native-sakura5`, `build/runtime-native-*` |

Two Windows snags, both fixed without editing the toolkit:

1. `fetch_wgpu.sh`, `fetch_sdl2.sh`, `fetch_dxc.sh` fall back to `tar -xf` for
   `.zip` files. MSYS/GNU tar cannot read zip, so setup dies with
   `tar: This does not look like a tar archive`. Extracted all three with .NET
   `ZipFile` after verifying the pinned SHA-256 values.
2. The WinLibs `ccache` is on PATH but was left unused (`PS2_CCACHE=0`) to keep
   the first build predictable.

## Disc image

The only Disc 1 copy on this machine is an extracted folder
(`<your Disc 1 ISO>`).
`port.sh` wants an image, so `tools\make-iso.py` (this project, pycdlib) packs the
folder into ISO 9660 level 1:

```
C:\recomp\work\ps2\Sakura Wars - So Long, My Love (USA) (Disc 1) (English Voice Over).iso
3.57 GiB, 1,870,316 sectors, volume id "100" (same as the Disc 2 image)
```

Round-trip verified: `SYSTEM.CNF`, `SLUS_219.27`, `MODULE\MODULES.IRX`,
`MODULE\IOPRP300.IMG` hash-identical to the source folder; the toolkit's own
`disc.py list/extract` reads it.

Disc 1 is single-layer (LAYER0.CVM only, 3,825,092,608 B). Disc 2
(`C:\recomp\work\ps2\...Disc 2 (Japanese Voice Over).iso`) is dual-layer with
LAYER0 + LAYER1 and boots `SLUS_219.30`.

## First build result — halts after 2 frames

`scripts/port.sh sakura5 <iso> --native-only` completes: 178 → 237 translation
units, runtime lib built (59 files), final `build/native-sakura5/ps2run` links.

The exploring run **halts after 2 frames**, before any GS output:

```
[ee] no translated code at 0x00539780 (ra 0x00141F7C)
[ee] halted: missing code at 0x00539780 (ra 0x00141F7C)
[ee] stopped after 2 frames, 14214163 cycles
```

`gp = 0x55C070` and the stack
(`001B504C 001B3144 001B3108 0014FE48 00120210`) match the engine bootstrap
chain recorded in `HANDOFF.md` §4 — same code path, different runtime.

## Root cause of the 2-frame halt

The boot code calls a table of **66 function pointers** at `0x541F90`
(terminated by a zero at `0x542098`). All 66 point into a contiguous 35 KB block
of real MIPS code at `0x539480..0x541EF0`.

That block is inside the ELF's single RWX load segment
(`vaddr 0x120000`, `filesz 0x434580`, `memsz 0x46D000`), so the bytes are in the
file — but nothing references them statically, and the translator's analysis
never reaches them. They are only reachable through the pointer table, which is
data. Each explore round discovered exactly one pointer, so the default 8 rounds
reached 8 of 66.

Seeded state: `games/sakura5/entries.txt` holds all 66 addresses.
This is a coverage fix, not a hack: the addresses are the ELF's own initialized
function pointers.

## Second build result — it runs

With the 66 entries seeded, `port.sh` re-translated to 239 units, the exploring
run went the **full 3600 frames** with `0 new entry points`, and the build
recorded **197 VU1 programs, 105 of them jump targets**. Final explore stats:

```
[ee] stopped after 3600 frames, 17699635269 cycles: frame limit reached
[gs] SetGsCrt interlace 1 mode 0x2 field 0
[gs] 11837853 primitives drawn, 12 display dispatches
[vif1] 1358690 programs started on VU1
[gpu] 44406 uploads, 22747 load_clut, 14542 decode
```

## Verified end to end (2400-frame scripted run, 2026-11-23)

Real output, not a metric:

| Milestone | Evidence |
|---|---|
| Boot + render | 640x448 frames, `SetGsCrt interlace 1 mode 0x2` |
| Save-file prompt | *"There is no game file for Sakura Wars: So Long, My Love"* |
| Memory-card format | *"Formatting…"* → *"Formatted the Memory Card (8MB) successfully"* |
| Card really written | `3581 page reads, 2440 page writes, 208 block erases` |
| **`LAYER0.CVM` opens** | `[cdvdfsv] search \LAYER0.CVM;1 -> found` |
| Opening film | *Gemini Sunrise* title card, IPU decoding (`57181` decode cmds) |
| Steady frame pacing | `2377 new pictures in 2400 refreshes (one every 1.01)` |

Then a 7200-frame pass on the same card (opening film → title → New Game):

| Milestone | Evidence |
|---|---|
| Main menu | *New Game / Load Game / Continue / Option* screen |
| New Game accepted | menu dismissed, opening cutscene starts |
| Cutscene video | cherry-blossom scene with characters, decoded through the IPU |
| Pacing | `7174 new pictures in 7200 refreshes (one every 1.00)` |

Third pass, 15000 frames, timed:

| Result | Value |
|---|---|
| **In-game** | dialogue scene with portraits, dialogue box and advance arrow |
| Dialogue advances | text and character expression change between frames |
| Wall time | **128 s for 15000 frames ≈ 117 frames/s**, i.e. ~1.95× real time |
| Misses / live translation | none (`[ee] halted: frame limit reached`) |
| Draw load | 11.5M primitives, 312k texture uploads, 1.17M CLUT loads |
| IPU | 307M qwords decoded (film and effects) |

Speed caveat: that run was headless **and** writing a frame capture every
600 frames, so it is a lower bound on what a windowed run does.

Windowed, from the runner's own title bar (vsync on, 1x, D3D12):

```
56.2 fps   CPU 14%   GPU 6%   RAM 521 MB   audio 117 ms, stretched x1.0
```

So the 60 Hz frame rate holds with most of the machine idle — this port is not
CPU- or GPU-bound at native resolution on a 5600 / RTX 3070.

### The middleware is running for real

Straight from the IOP serial console in `play4.log`:

```
[iop-tty] SDR driver version 4.0.1 (C) SCEI
[iop-tty] Sakuya 2 - Miyako Sound Service   version 2.19
[iop-tty] Copyright 2001-2003 (C) OVERWORKS, LTD.
[iop-tty] CRI ADX Driver Ver.9.38(Dec 16 2004 16:43:11)
[iop-tty] CRI ADX Driver : sceSdInit Call = 0
```

`Sakuya 2` is the game's own sound engine and `CRI ADX` 9.38 is the middleware
that the PS2Recomp attempt kept trying to stub. Here both are guest code on the
interpreter.

Audio is **produced and measured**, though not yet listened to:

```
PS2_AUDIO_DUMP=audio-film.wav  (headless: no sound device, the runtime writes the WAV)
[spu2] wrote 3356672 samples (69.93 s) to audio-film.wav; the chip ran 69.93 s of emulated time
```

| Measure | Value |
|---|---|
| Format | 48000 Hz, 16-bit, stereo |
| Peak | 25588 / 32767 |
| Seconds above 500 RMS | 51 of 69 |
| Loudest stretch | 60–62 s, 4099–5199 RMS |
| Longest silence | 11 s, on the save/health screens (no music there) |

The level moves with the scene — quiet on the card screens, continuous from the
title into the opening film — so this is decoded music and voice, not a tone.
Whether it *sounds* right (mixing, ADX looping, the stretcher's artefacts) still
needs a person with speakers.

The SIF counters also name the RPC server that stopped the PS2Recomp attempt:

```
[sif] EE binds by server id: ... 0x80000592 x2 0x80000593 x2 0x80000595 x1 0x80000597 x1 ...
[sif] EE calls by server id: ... 0x80000592 x2 0x80000593 x325 0x80000595 x144 0x80000597 x1 ...
[sif] RPC servers of IOP modules: 0x80000100 0x80000400 0x00002000 0x00002001 0x00002002 0x90000200 ...
```

`0x80000597` is the SID from `HANDOFF.md` §5. Here it is bound and called once,
and answered by the game's own `cdvdfsv` IOP module running on the interpreter.
No hand-written HLE, no stub list.

## What this settles

`HANDOFF.md` §5 recorded the whole chain as `SID 0x80000597 → 0` and asked what
the reply must contain. The answer is that a recompiler does not have to know:
the guest `cdvdfsv` server already knows. Emulating the IOP and running its real
modules removes the question instead of answering it.

## Open questions

* How far does gameplay go? The opening dialogue is playable; battles, chapter
  transitions and the save/load round trip are untested.
* Windowed speed has not been measured. Headless with capture was ~117 frames/s
  (1.95× real time), which leaves room, but that is not the play path.
* Audio: the ADX driver initialises and prints, but nothing has been listened to.
* The 66-entry table at `0x541F90` looks like a middleware API dispatch table.
  A general sweep of the ELF for words pointing into the code segment would find
  any others automatically.
* Disc 2 (`SLUS_219.30`) is untouched; it boots a different ELF and will need its
  own table check.
