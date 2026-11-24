# Rebuilding the game executable from this source folder

This folder now contains everything needed to rebuild `game\SakuraWarsV.exe` — the launcher source,
the translated game source, the recorded vector-unit programs, the entry table and the toolkit
patch. **You still need your own disc image**; none is included.

## What is here

```
launcher\            Launcher.cs, Build-Launcher.ps1, art\ (banner, logo, mark, icon)
tools\               make-iso.py (folder -> ISO), find-entry-tables.py (pointer-table finder)
recomp\
  generated\sakura5\ 257 files: the C++ the translator produced from SLUS_219.27
  vu1\, vu0\         the vector-unit microcode programs recorded during the exploring runs
  entries.txt        the 66 entry points the build needs (see build-notes.md)
  rebloom-changes.patch  the only changes made to ps2-native-recomp
  build-notes.md     what was changed and why
BUILDING.md          the toolkit setup in full
RESULTS.md           what was measured
```

## The short version

1. Get the toolkit and apply the patch:

   ```bash
   git clone https://github.com/exoteric33/ps2-native-recomp C:/recomp/ps2-native-recomp
   cd /c/recomp/ps2-native-recomp
   git checkout 66528c8
   git apply /path/to/recomp/rebloom-changes.patch
   ```

2. Put this folder's build inputs where the toolkit expects them:

   ```bash
   cp -r recomp/generated/sakura5  C:/recomp/ps2-native-recomp/generated/
   mkdir -p C:/recomp/ps2-native-recomp/games/sakura5
   cp -r recomp/vu1 recomp/vu0 recomp/entries.txt  C:/recomp/ps2-native-recomp/games/sakura5/
   ```

3. Build (needs the toolchain and dependencies from `BUILDING.md`):

   ```bash
   bash scripts/port.sh sakura5 "D:/your-disc-1.iso" --native-only --no-explore
   ```

   The translated code is already in `generated\`, so this mostly compiles and links; it does not
   need to explore again if `entries.txt` is in place.

4. Copy the result into the release layout:

   ```
   build/native-sakura5/ps2run.exe  ->  game\SakuraWarsV.exe
   build/native-sakura5/*.dll       ->  game\
   ```

## Why the generated code is here

`port.sh` translates the game's ELF into C++. That output is a derivative of the disc, exactly like
the executable itself: it is game code that has been translated, not engine source. It is included
so the release is genuinely rebuildable, the way ReDUB ships its `src\` and `work-remix\` trees. Do
not expect it to compile on its own — it is one half of a pair with the patched toolkit.
