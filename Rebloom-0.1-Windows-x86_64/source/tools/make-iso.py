#!/usr/bin/env python3
"""Pack an extracted PS2 disc folder into a plain ISO 9660 image.

ps2-native-recomp wants a disc image (port.sh accepts .iso), and the only
Disc 1 copy on this machine is an extracted folder. This writes an equivalent
single-layer DVD image: same tree, same bytes, fresh but valid ISO 9660
metadata. The game resolves files through the on-disc filesystem, so file
order does not need to match the pressed disc.

Usage:
  python make-iso.py <source-folder> <out.iso> [--volume-id ID]

Requires pycdlib (pip install pycdlib).
"""

import argparse
import os
import sys
import time

try:
    import pycdlib
except ImportError:
    sys.exit("pycdlib is missing: python -m pip install pycdlib")

SECTOR = 2048


def norm(name):
    """ISO 9660 level 1 identifier: 8.3, A-Z 0-9 _ and one dot."""
    base, dot, ext = name.rpartition(".")
    if not dot:
        base, ext = name, ""
    base = base.upper()
    ext = ext.upper()
    if not base or len(base) > 8 or len(ext) > 3:
        raise ValueError("%s is not an 8.3 name" % name)
    for part in (base, ext):
        if any(c not in "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_" for c in part):
            raise ValueError("%s is not an 8.3 name" % name)
    return base + ("." + ext if ext else "")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("source")
    ap.add_argument("image")
    ap.add_argument("--volume-id", default="100")
    ap.add_argument("--no-boot-first", action="store_true",
                    help="keep plain alphabetical order instead of boot file first")
    args = ap.parse_args()

    src = os.path.abspath(args.source)
    if not os.path.isdir(src):
        sys.exit("%s: not a folder" % src)

    entries = []
    for root, dirs, files in os.walk(src):
        dirs.sort()
        rel_root = os.path.relpath(root, src)
        rel_root = "" if rel_root == "." else rel_root.replace("\\", "/")
        for d in dirs:
            entries.append(((rel_root + "/" + d) if rel_root else d, True))
        for f in sorted(files):
            entries.append(((rel_root + "/" + f) if rel_root else f, False))

    # Boot configuration and the boot program first: the runtime reads them
    # immediately, and CRI archives last keeps the small files together.
    def rank(item):
        path, is_dir = item
        top = path.split("/")[0].upper()
        if is_dir:
            return (0, path)
        if top == "SYSTEM.CNF":
            return (0, path)
        if top.startswith("SLUS_") or top.startswith("SLES_") or top.startswith("SLPS_"):
            return (1, path)
        if top == "MODULE":
            return (2, path)
        if top.endswith(".CVM"):
            return (9, path)
        return (3, path)

    # directories before their contents: sort by depth after the rank groups
    entries.sort(key=lambda e: (rank(e)[0], e[0].count("/"), rank(e)[1]))

    iso = pycdlib.PyCdlib()
    iso.new(interchange_level=1, joliet=None, rock_ridge=None, udf=None,
            sys_ident="PLAYSTATION", vol_ident=args.volume_id)

    made_dirs = {""}
    total = 0
    started = time.time()
    for path, is_dir in entries:
        parent, _, name = path.rpartition("/")
        if parent not in made_dirs:
            sys.exit("internal order error: %s before %s" % (path, parent))
        ident = norm(name)
        if is_dir:
            iso.add_directory("/" + ident)
            made_dirs.add(path)
            continue
        disk = os.path.join(src, path.replace("/", os.sep))
        size = os.path.getsize(disk)
        total += size
        iso_path = "/" + (ident + ";" if parent == "" else "")
        if parent:
            iso_path = "/" + "/".join(
                norm(p) for p in path.split("/")[:-1]) + "/" + ident + ";"
        iso.add_file(disk, iso_path=iso_path)

    iso.write(args.image)
    iso.close()
    print("%s: %d files, %.2f GiB, %.1f s" %
          (args.image, sum(1 for _, d in entries if not d), total / (1 << 30),
           time.time() - started))


if __name__ == "__main__":
    main()
