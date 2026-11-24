#!/usr/bin/env python3
"""Build and package the unsigned iOS app on Windows.

Requires the iPhoneOS SDK, the Swift toolchain's clang, ld64.lld, the iOS
SDL2 static build and the iOS wgpu-native release. Paths can be overridden
with IOS_SDK, IOS_LLVM, IOS_LD64, IOS_SDL_BUILD, IOS_WGPU and IOS_RUNTIME.
"""
from __future__ import annotations

import os
import plistlib
import shutil
import subprocess
import sys
import time
import zipfile
from pathlib import Path

HERE = Path(__file__).resolve().parent
ROOT = HERE.parents[1]
TREE = ROOT / "Rebloom-0.1-Windows-x86_64"
RECOMP = Path(r"C:\recomp\ps2-native-recomp")

SDK = Path(os.environ.get("IOS_SDK", r"C:\Users\Donte\OpenFruit-iOS-SDK-27.3\Xcode-beta.app\Contents\Developer\Platforms\iPhoneOS.platform\Developer\SDKs\iPhoneOS.sdk"))
LLVM = Path(os.environ.get("IOS_LLVM", r"C:\Users\Donte\AppData\Local\Programs\Swift\Toolchains\6.4.1+Asserts\usr"))
LD64 = Path(os.environ.get("IOS_LD64", r"E:\AI\iosc\tools"))
SDL_BUILD = Path(os.environ.get("IOS_SDL_BUILD", str(Path(os.environ["TEMP"]) / "opencode" / "iossdl-rebloom")))
SDL_SOURCE = Path(os.environ.get("IOS_SDL_SOURCE", r"C:\Users\Donte\Documents\Codex\ios-toolchain-references\SDL2"))
WGPU = Path(os.environ.get("IOS_WGPU", str(RECOMP / "third_party" / "wgpu-native-ios-aarch64")))
RUNTIME = Path(os.environ.get("IOS_RUNTIME", str(Path(os.environ["TEMP"]) / "opencode" / "ios-runtime")))
BUILD = Path(os.environ.get("IOS_BUILD", str(Path(os.environ["TEMP"]) / "opencode" / "ios-rebloom")))
CLANG = LLVM / "bin" / "clang.exe"
CLANGXX = LLVM / "bin" / "clang++.exe"
DEPLOY = "16.4"
TARGET = f"arm64-apple-ios{DEPLOY}"

BASE = [
    "-target", TARGET, "-isysroot", str(SDK), "-O2", "-DNDEBUG", "-D_GNU_SOURCE",
    "-DREBLOOM_TOUCH_INPUT",
    "-ffp-contract=off", "-I", str(RECOMP / "runtime" / "include"),
    "-I", str(RECOMP / "generated" / "sakura5"),
    "-I", str(RECOMP / "host"),
    "-I", str(SDL_SOURCE / "include"), "-I", str(WGPU / "include"),
]


def run(cmd: list[str], what: str) -> None:
    print(f"[{what}]", flush=True)
    p = subprocess.run(cmd)
    if p.returncode:
        raise SystemExit(f"{what} failed with {p.returncode}")


def compile_cpp(src: Path, obj: Path, extra: list[str] | None = None) -> None:
    obj.parent.mkdir(parents=True, exist_ok=True)
    run([str(CLANGXX), *BASE, *extra, "-std=c++20", "-DPS2_WINDOW", "-DPS2_GPU",
         "-c", str(src), "-o", str(obj)], f"cxx {src.name}")


def compile_objc(src: Path, obj: Path, arc: bool = True) -> None:
    obj.parent.mkdir(parents=True, exist_ok=True)
    flags = ["-fobjc-arc", "-fblocks"] if arc else []
    run([str(CLANG), *BASE, *flags, "-I", str(HERE), "-c", str(src), "-o", str(obj)], f"objc {src.name}")


def main() -> int:
    for p in (SDK, CLANG, LD64 / "ld64.lld.exe", SDL_BUILD / "libSDL2.a", SDL_BUILD / "libSDL2main.a",
              WGPU / "lib" / "libwgpu_native.a", RUNTIME / "libps2game.a", RUNTIME / "libps2runtime.a"):
        if not p.exists():
            raise SystemExit(f"missing: {p}")
    if BUILD.exists():
        shutil.rmtree(BUILD)
    host = BUILD / "host"
    objc = BUILD / "objc"
    app = BUILD / "Rebloom.app"
    app.mkdir(parents=True)
    (app / "game").mkdir()

    sources = [
        (RECOMP / "host" / "main.cpp", ["-Dmain=ps2_host_main"]),
        (RECOMP / "host" / "window.cpp", []),
        (RECOMP / "host" / "crash.cpp", []),
        (RECOMP / "host" / "keymap.cpp", []),
        (RECOMP / "host" / "quickmenu.cpp", []),
        (RECOMP / "host" / "stretch.cpp", []),
        (RECOMP / "host" / "touch.cpp", []),
    ]
    objs: list[Path] = []
    for src, extra in sources:
        obj = host / (src.stem + ".o")
        compile_cpp(src, obj, extra)
        objs.append(obj)
    for src, arc in ((HERE / "ios_main.mm", False), (HERE / "ios_launcher.m", True), (HERE / "ios_scene.m", True),
                     (HERE / "ios_touch.m", True)):
        obj = objc / (src.stem + ".o")
        compile_objc(src, obj, arc)
        objs.append(obj)

    exe = app / "Rebloom"
    link = [
        str(CLANGXX), *BASE, "-fuse-ld=lld", f"-B{LD64}{os.sep}", "-Wl,--error-limit=0",
        "-o", str(exe), *map(str, objs),
        str(RUNTIME / "libps2game.a"), str(RUNTIME / "libps2runtime.a"),
        str(SDL_BUILD / "libSDL2main.a"), str(SDL_BUILD / "libSDL2.a"),
        str(WGPU / "lib" / "libwgpu_native.a"),
        "-framework", "UIKit", "-framework", "Foundation", "-framework", "CoreGraphics",
        "-framework", "QuartzCore", "-framework", "Metal", "-framework", "CoreAudio",
        "-framework", "AudioToolbox", "-framework", "AVFoundation", "-framework", "GameController",
        "-framework", "CoreHaptics", "-framework", "CoreMotion", "-framework", "CoreVideo",
        "-framework", "CoreMedia", "-framework", "OpenGLES", "-framework", "CoreFoundation",
        "-framework", "UniformTypeIdentifiers", "-framework", "CoreBluetooth",
        "-lobjc", "-lz", "-lm",
    ]
    run(link, "link Rebloom")

    shutil.copy2(HERE / "Info.plist", app / "Info.plist")
    (app / "PkgInfo").write_text("APPL????", encoding="ascii")
    shutil.copy2(HERE / "gamecontrollerdb.txt", app / "gamecontrollerdb.txt")
    for name in ("hero.jpg", "rail-logo.png", "sakura-petals.png"):
        shutil.copy2(HERE / name, app / name)
    icons = HERE / "icons"
    if icons.is_dir():
        for icon in sorted(icons.glob("*.png")):
            shutil.copy2(icon, app / icon.name)
    shutil.copy2(TREE / "game" / "blit-dedither.wgsl", app / "game" / "blit-dedither.wgsl")

    # The app must carry no game data. The user imports a disc in the launcher.
    print(f"app: {app}")
    header = exe.read_bytes()[:8]
    if header[:4] != b"\xcf\xfa\xed\xfe" or int.from_bytes(header[4:8], "little") != 0x0100000C:
        raise SystemExit("the linked executable is not a thin arm64 Mach-O")

    dist = HERE / "dist"
    dist.mkdir(parents=True, exist_ok=True)
    ipa = dist / "Rebloom-0.1-ios-unsigned.ipa"
    if ipa.exists():
        ipa.unlink()
    with zipfile.ZipFile(ipa, "w", zipfile.ZIP_DEFLATED, compresslevel=9) as z:
        root = app.parent
        for path in sorted(app.rglob("*")):
            if not path.is_file():
                continue
            name = "Payload/" + path.relative_to(root).as_posix()
            info = zipfile.ZipInfo(name)
            info.date_time = time.localtime(path.stat().st_mtime)[:6]
            info.compress_type = zipfile.ZIP_DEFLATED
            info.external_attr = ((0o755 if path.name == "Rebloom" else 0o644) & 0xFFFF) << 16
            with path.open("rb") as src, z.open(info, "w") as dst:
                shutil.copyfileobj(src, dst)
    print(f"ipa: {ipa} ({ipa.stat().st_size:,} bytes)")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
