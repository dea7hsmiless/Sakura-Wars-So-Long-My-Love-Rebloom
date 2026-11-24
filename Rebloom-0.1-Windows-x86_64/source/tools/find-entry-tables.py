#!/usr/bin/env python3
"""Find function-pointer tables in a PS2 ELF: code that is reachable only through data.

Why this exists
---------------
The translator starts at the entry point, follows jumps and calls, and guesses at function
starts. Code that is *only* reachable through an initialised pointer table is invisible to
it: the table is data, and nothing in the code refers to the addresses it holds.

Sakura Wars V does exactly that. `0x541F90` holds 66 pointers into a 35 KiB block of MIPS code
at `0x539480..0x541EF0`. The translator classified the whole block as data, so the game halted
two frames in. Seeding those 66 addresses as entry points fixed it.

What it does
------------
Reads the ELF's program headers, then scans the loaded segment for runs of consecutive 32-bit
words that point back into a loaded segment. A run of four or more is reported with its
address, length and the span its targets cover. With --out, the targets of *compact* runs
(a target span of at most --max-span bytes) are written as one hex address per line, which is
the format `games/<name>/entries.txt` uses.

Compact runs are the useful ones: a compact table is almost always a dispatch/API table for a
contiguous code block, while a long run of scattered pointers is usually strings or data.

Usage
-----
  python find-entry-tables.py path/to/SLUS_219.27
  python find-entry-tables.py path/to/SLUS_219.27 --out entries.txt
"""

import argparse
import struct
import sys

PT_LOAD = 1
PF_X = 1


def load_segments(data):
    if data[:4] != b"\x7fELF":
        sys.exit("not an ELF file")
    if data[4] != 1 or data[5] != 1:
        sys.exit("only 32-bit little-endian ELFs are handled")
    phoff = struct.unpack_from("<I", data, 28)[0]
    phentsize = struct.unpack_from("<H", data, 42)[0]
    phnum = struct.unpack_from("<H", data, 44)[0]
    segments = []
    for i in range(phnum):
        off = phoff + i * phentsize
        p_type, p_offset, p_vaddr, p_paddr, p_filesz, p_memsz, p_flags, p_align = \
            struct.unpack_from("<8I", data, off)
        if p_type != PT_LOAD:
            continue
        segments.append({
            "offset": p_offset, "vaddr": p_vaddr, "filesz": p_filesz,
            "memsz": p_memsz, "exec": bool(p_flags & PF_X),
        })
    if not segments:
        sys.exit("no PT_LOAD segments")
    return segments


def home(segments, value):
    """The segment whose file image contains `value`, or None."""
    for s in segments:
        if s["vaddr"] <= value < s["vaddr"] + s["filesz"]:
            return s
    return None


def scan(data, segments):
    """Every word in every loaded segment, grouped into runs of pointers."""
    found = []
    for s in segments:
        start, end = s["offset"], s["offset"] + s["filesz"] - 3
        run_at, run_targets = None, []

        def flush():
            if run_at is not None and len(run_targets) >= 4:
                found.append((run_at, list(run_targets)))
            return None, []

        for off in range(start, end, 4):
            value = struct.unpack_from("<I", data, off)[0]
            if home(segments, value) is not None:
                if run_at is None:
                    run_at = s["vaddr"] + (off - s["offset"])
                run_targets.append(value)
            else:
                run_at, run_targets = flush()
        run_at, run_targets = flush()
    return found


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("elf")
    ap.add_argument("--out", help="write entry points (one lowercase hex address per line)")
    ap.add_argument("--min", type=int, default=4, help="shortest run to report (default 4)")
    ap.add_argument("--max-span", type=int, default=64 * 1024,
                    help="largest target span written to --out (default 65536)")
    ap.add_argument("--top", type=int, default=25, help="runs to list (default 25)")
    ap.add_argument("--table", type=lambda v: int(v, 0),
                    help="dump the run at this address only, e.g. --table 0x541F90")
    ap.add_argument("--all", action="store_true", help="write every reported target, not just compact runs")
    args = ap.parse_args()

    data = open(args.elf, "rb").read()
    segments = load_segments(data)
    for s in segments:
        print("segment vaddr=0x%08X filesz=0x%X memsz=0x%X exec=%s" %
              (s["vaddr"], s["filesz"], s["memsz"], s["exec"]))

    tables = scan(data, segments)
    tables.sort(key=lambda t: (-len(t[1]), t[0]))

    if args.table is not None:
        match = [t for t in tables if t[0] == args.table]
        if not match:
            sys.exit("no run of 4+ pointers starts at 0x%08X" % args.table)
        targets = sorted(set(match[0][1]))
        print("\n0x%08X: %d pointers\n" % (args.table, len(targets)))
        if args.out:
            with open(args.out, "w", encoding="ascii", newline="\n") as f:
                for value in targets:
                    f.write("%x\n" % value)
            print("%d entry points written to %s" % (len(targets), args.out))
        return

    print("\n%d run(s) of %d+ pointers; the %d largest:\n" % (len(tables), args.min, args.top))
    chosen = []
    for at, targets in tables[:args.top]:
        span = max(targets) - min(targets)
        compact = span <= args.max_span
        print("  0x%08X: %3d pointers, targets 0x%08X..0x%08X (span %d)%s" %
              (at, len(targets), min(targets), max(targets), span, "  compact" if compact else ""))
        if compact or args.all:
            chosen.extend(targets)

    chosen = sorted(set(chosen))
    if args.out:
        with open(args.out, "w", encoding="ascii", newline="\n") as f:
            for value in chosen:
                f.write("%x\n" % value)
        print("\n%d candidate entry points written to %s (review them: some tables hold data pointers)" %
              (len(chosen), args.out))
    else:
        print("\n%d candidate entry points; pass --out FILE or --table ADDRESS" % len(chosen))


if __name__ == "__main__":
    main()
