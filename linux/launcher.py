#!/usr/bin/env python3
"""Rebloom Launcher for Linux.

Same model as the Windows launcher: a disc image is copied into discs/ when it
is imported, so the source file can be deleted afterwards. The game itself is
the statically recompiled Sakura Wars V runner beside this program.
"""
from __future__ import annotations

import argparse
import os
import shutil
import subprocess
import sys
import threading
import time
import tkinter as tk
from pathlib import Path
from tkinter import filedialog, messagebox, ttk

APP = "Rebloom Launcher"
TITLE = "Sakura Wars V: So Long, My Love - Rebloom"
VERSION = "0.1"

BG = "#120d0b"
RAIL = "#0c0908"
CARD = "#221914"
EDGE = "#3e2d24"
FOOT = "#1a120f"
GOLD = "#e8c46a"
RED = "#b03a48"
INK = "#f2ece4"
MUTED = "#a99c8e"
GOOD = "#78c496"
BAD = "#d06a6a"

SERIALS = {b"SLUS_219.27": "en", b"SLUS_219.30": "jp"}

# The rows of the two binding editors. The names are the words the game reads
# from game/data/keys.ini and game/data/gamepad.ini.
KEY_ACTIONS = [
    ("dpad_up", "D-pad Up"), ("dpad_down", "D-pad Down"),
    ("dpad_left", "D-pad Left"), ("dpad_right", "D-pad Right"),
    ("left_up", "Left Stick Up"), ("left_down", "Left Stick Down"),
    ("left_left", "Left Stick Left"), ("left_right", "Left Stick Right"),
    ("right_up", "Right Stick Up"), ("right_down", "Right Stick Down"),
    ("right_left", "Right Stick Left"), ("right_right", "Right Stick Right"),
    ("cross", "Cross"), ("circle", "Circle"), ("square", "Square"), ("triangle", "Triangle"),
    ("l1", "L1"), ("r1", "R1"), ("l2", "L2"), ("r2", "R2"), ("l3", "L3"), ("r3", "R3"),
    ("start", "Start"), ("select", "Select"), ("roll", "Roll"), ("rage", "Rage"),
    ("menu", "Menu key"), ("help", "Help key"),
]

PAD_ACTIONS = [
    ("cross", "Cross", "a"), ("circle", "Circle", "b"), ("square", "Square", "x"),
    ("triangle", "Triangle", "y"), ("l1", "L1", "leftshoulder"), ("r1", "R1", "rightshoulder"),
    ("l3", "L3", "leftstick"), ("r3", "R3", "rightstick"), ("dpad_up", "D-pad Up", "dpup"),
    ("dpad_down", "D-pad Down", "dpdown"), ("dpad_left", "D-pad Left", "dpleft"),
    ("dpad_right", "D-pad Right", "dpright"),
]

PAD_CHOICES = [
    ("A", "a"), ("B", "b"), ("X", "x"), ("Y", "y"),
    ("Left Shoulder", "leftshoulder"), ("Right Shoulder", "rightshoulder"),
    ("Left Stick", "leftstick"), ("Right Stick", "rightstick"),
    ("D-pad Up", "dpup"), ("D-pad Down", "dpdown"),
    ("D-pad Left", "dpleft"), ("D-pad Right", "dpright"),
    ("Back", "back"), ("Start", "start"), ("Guide", "guide"),
    ("Misc 1", "misc1"), ("Paddle 1", "paddle1"), ("Paddle 2", "paddle2"), ("None", "none"),
]

PROGRAM_KEYS = {"F1", "F2", "F5", "F8", "F9", "F11"}

# Tk keysyms to the English key names in keys.ini (the same words SDL prints).
KEY_NAMES = {
    "Left": "Left", "Right": "Right", "Up": "Up", "Down": "Down",
    "space": "Space", "Return": "Enter", "KP_Enter": "Keypad Enter",
    "Escape": "Esc", "Tab": "Tab", "BackSpace": "Backspace",
    "Delete": "Delete", "Insert": "Insert", "Home": "Home", "End": "End",
    "Page_Up": "Page Up", "Page_Down": "Page Down",
    "Shift_L": "Left Shift", "Shift_R": "Right Shift",
    "Control_L": "Left Ctrl", "Control_R": "Right Ctrl",
    "Alt_L": "Left Alt", "Alt_R": "Right Alt", "Caps_Lock": "Caps Lock",
    "Print": "Print Screen", "Scroll_Lock": "Scroll Lock", "Pause": "Pause",
    "minus": "Minus", "equal": "Plus", "semicolon": "Semicolon",
    "comma": "Comma", "period": "Period",
}


def key_name(keysym: str) -> str | None:
    if keysym in KEY_NAMES:
        return KEY_NAMES[keysym]
    if len(keysym) == 1 and keysym.isalnum():
        return keysym.upper()
    if keysym.startswith("KP_") and keysym[3:].isdigit():
        return "Keypad " + keysym[3:]
    return None


def read_bindings(path: Path) -> dict[str, str]:
    values: dict[str, str] = {}
    try:
        for raw in path.read_text(encoding="utf-8", errors="replace").splitlines():
            line = raw.strip()
            if not line or line[0] in ";#":
                continue
            name, sep, value = line.partition("=")
            if sep and name.strip():
                values[name.strip().lower()] = value.strip()
    except OSError:
        pass
    return values


def app_dir() -> Path:
    if getattr(sys, "frozen", False):
        return Path(sys.executable).resolve().parent
    return Path(__file__).resolve().parent


def resource_dir() -> Path:
    """The read-only program files. Inside an AppImage these sit in the mount."""
    env = os.environ.get("REBLOOM_RESOURCES")
    return Path(env) if env else app_dir()


def state_dir() -> Path:
    """Where discs, saves and launcher.ini live. An AppImage cannot write inside itself."""
    env = os.environ.get("REBLOOM_HOME")
    if env:
        return Path(env)
    if os.environ.get("APPIMAGE"):
        return Path.home() / ".local" / "share" / "rebloom"
    return app_dir()


class Launcher:
    def __init__(self, root: tk.Tk, auto_play: bool = False, import_path: str | None = None):
        self.root = root
        self.resources = resource_dir()
        self.base = state_dir()
        self.base.mkdir(parents=True, exist_ok=True)
        self.ini_path = self.base / "launcher.ini"
        self.discs = self.base / "discs"
        self.ini: dict[str, str] = {}
        self.log_lines: list[str] = []
        self.pages: dict[str, tk.Frame] = {}
        self.nav_buttons: dict[str, tk.Button] = {}
        self.page = "home"
        self.load_ini()
        self.build()
        self.log(f"{APP} {VERSION} ready.")
        self.log(f"program: {self.resources}")
        self.log(f"data: {self.base}")

        if import_path:
            self.root.after(250, lambda: self.import_from(import_path))
        if auto_play and "--launcher" not in sys.argv:
            self.root.after(350, self.play)

    # ---------------- paths and settings ----------------

    @property
    def runner(self) -> Path:
        for name in ("SakuraWarsV", "ps2run"):
            p = self.resources / "game" / name
            if p.is_file():
                return p
        return self.resources / "game" / "SakuraWarsV"

    @property
    def game_dir(self) -> Path:
        return self.base / "game" / "data"

    @property
    def language(self) -> str:
        return self.get("language", "en")

    def get(self, key: str, fallback: str) -> str:
        return self.ini.get(key) or fallback

    def set(self, key: str, value: str) -> None:
        self.ini[key] = value
        self.save_ini()

    def load_ini(self) -> None:
        self.ini = {}
        try:
            for raw in self.ini_path.read_text(encoding="utf-8", errors="replace").splitlines():
                line = raw.strip()
                if not line or line[0] in ";#":
                    continue
                key, sep, value = line.partition("=")
                if sep and key.strip():
                    self.ini[key.strip()] = value.strip()
        except FileNotFoundError:
            pass
        except OSError as exc:
            self.log(f"settings: {exc}")

    def save_ini(self) -> None:
        try:
            lines = ["; Sakura Wars V launcher settings"]
            lines += [f"{k}={v}" for k, v in self.ini.items()]
            self.ini_path.write_text("\n".join(lines) + "\n", encoding="utf-8")
        except OSError as exc:
            self.log(f"settings: {exc}")

    def bypass(self) -> bool:
        return self.get("bypass", "0") == "1" and "--launcher" not in sys.argv

    def log(self, text: str) -> None:
        self.log_lines.append(text)
        self.log_lines = self.log_lines[-200:]
        if hasattr(self, "status"):
            self.status.configure(text=text)

    # ---------------- disc discovery and import ----------------

    @staticmethod
    def name_language(path: Path) -> str:
        n = path.name.lower()
        if "disc 2" in n or "disc2" in n or "japanese" in n:
            return "jp"
        if "disc 1" in n or "disc1" in n or "english" in n:
            return "en"
        return ""

    @staticmethod
    def serial_language(path: Path) -> str:
        try:
            with path.open("rb") as fh:
                head = fh.read(4 << 20)
        except OSError:
            return ""
        for serial, lang in SERIALS.items():
            if serial in head:
                return lang
        return ""

    def find_disc(self, language: str) -> Path | None:
        if not self.discs.is_dir():
            return None
        isos = sorted(p for p in self.discs.iterdir() if p.suffix.lower() == ".iso")
        prefer = ("disc 2", "disc2", "japanese") if language == "jp" else ("disc 1", "disc1", "english")
        for want in prefer:
            for iso in isos:
                if want in iso.name.lower():
                    return iso
        if len(isos) == 1 and not self.name_language(isos[0]):
            return isos[0]
        return None

    def disc_for(self, language: str | None = None) -> Path | None:
        language = language or self.language
        found = self.find_disc(language)
        if found:
            return found
        stored = self.get("disc_jp" if language == "jp" else "disc_en", "")
        if stored:
            p = Path(stored)
            if not p.is_absolute():
                p = self.base / p
            if p.is_file():
                return p
        return None

    @staticmethod
    def free_space(path: Path) -> int:
        probe = path
        while not probe.exists() and probe != probe.parent:
            probe = probe.parent
        return shutil.disk_usage(probe).free

    @staticmethod
    def filesystem(path: Path) -> str:
        try:
            out = subprocess.run(["stat", "-f", "-c", "%T", str(path)], capture_output=True, text=True, timeout=5)
            return out.stdout.strip().lower()
        except Exception:
            return ""

    def import_from(self, source_name: str) -> bool:
        source = Path(source_name).expanduser()
        if source.suffix.lower() != ".iso":
            messagebox.showinfo(APP, "Only a plain .iso can be imported. Convert a .bin/.cue or an archive first.")
            return False
        if not source.is_file():
            messagebox.showerror(APP, f"That disc image is not there:\n{source}")
            return False

        try:
            total = source.stat().st_size
        except OSError as exc:
            messagebox.showerror(APP, f"The disc image could not be read:\n{exc}")
            return False

        self.discs.mkdir(parents=True, exist_ok=True)
        target = self.discs / source.name
        if source.resolve() == target.resolve():
            self.set("disc_jp" if self.language == "jp" else "disc_en", str(target.relative_to(self.base)))
            self.log(f"disc already in discs/: {target.name}")
            self.show_page("install")
            return True
        if target.exists() and not messagebox.askyesno(APP, f"A file named {target.name} is already in discs/.\nReplace it?"):
            return False

        inferred = self.serial_language(source) or self.name_language(source)
        if not inferred:
            answer = messagebox.askyesnocancel(
                APP,
                "Which disc is this?\n\nYes = Disc 1 (English voices)\nNo = Disc 2 (Japanese voices)\nCancel = do not import",
            )
            if answer is None:
                return False
            inferred = "en" if answer else "jp"
        if not inferred:
            inferred = self.language

        fs = self.filesystem(self.discs)
        if total > 4294967295 and fs in ("vfat", "fat", "fat32", "msdos"):
            messagebox.showwarning(APP, "This disc is larger than 4 GB and the destination is FAT32.\nUse an ext4, exFAT or NTFS drive for discs/.")
            return False
        if self.free_space(self.discs) < total + (64 << 20):
            need = (total + (64 << 20)) >> 20
            free = self.free_space(self.discs) >> 20
            messagebox.showwarning(APP, f"Not enough free space in discs/.\n\nNeeded: {need:,} MB\nFree:   {free:,} MB")
            return False

        if not messagebox.askyesno(
            APP,
            f"Copy {source.name} ({total >> 20:,} MB) into this folder's discs/?\n\nAfterwards the copy you imported from can be deleted.",
        ):
            return False

        target_tmp = target.with_name(target.name + ".part")
        progress = tk.Toplevel(self.root)
        progress.title("Importing disc image")
        progress.configure(bg=BG)
        progress.geometry("520x150")
        progress.resizable(False, False)
        progress.transient(self.root)
        progress.grab_set()
        tk.Label(progress, text=f"Copying {source.name}", bg=BG, fg=INK, font=("DejaVu Sans", 10, "bold")).pack(anchor="w", padx=18, pady=(18, 4))
        detail = tk.Label(progress, text="", bg=BG, fg=MUTED, font=("DejaVu Sans", 9))
        detail.pack(anchor="w", padx=18)
        bar = ttk.Progressbar(progress, maximum=1000, length=480)
        bar.pack(padx=18, pady=12)
        cancel = {"flag": False}

        def do_cancel() -> None:
            cancel["flag"] = True

        tk.Button(progress, text="Cancel", command=do_cancel, bg=CARD, fg=INK, activebackground=EDGE,
                  activeforeground=INK, relief="flat", bd=0, padx=16, pady=6).pack(anchor="e", padx=18)

        result = {"ok": False, "error": ""}

        def worker() -> None:
            try:
                copied = 0
                with source.open("rb") as src, target_tmp.open("wb") as dst:
                    while True:
                        if cancel["flag"]:
                            raise InterruptedError
                        chunk = src.read(1 << 20)
                        if not chunk:
                            break
                        dst.write(chunk)
                        copied += len(chunk)
                        if copied % (16 << 20) < (1 << 20):
                            pct = int(copied * 1000 / max(total, 1))
                            progress.after(0, lambda p=pct, c=copied: (bar.configure(value=p),
                                                                       detail.configure(text=f"{c >> 20:,} of {total >> 20:,} MB")))
                if copied != total:
                    raise OSError(f"copied {copied} of {total} bytes")
                os.replace(target_tmp, target)
                result["ok"] = True
            except InterruptedError:
                result["error"] = "cancelled"
            except Exception as exc:  # noqa: BLE001 - shown to the player
                result["error"] = str(exc)
            finally:
                if not result["ok"]:
                    try:
                        target_tmp.unlink()
                    except OSError:
                        pass
                progress.after(0, progress.destroy)

        threading.Thread(target=worker, daemon=True).start()
        self.root.wait_window(progress)

        if not result["ok"]:
            if result["error"] != "cancelled":
                messagebox.showerror(APP, f"The copy failed:\n{result['error']}")
                self.log(f"import failed: {result['error']}")
            else:
                self.log("import cancelled")
            return False

        slot = "disc_jp" if inferred == "jp" else "disc_en"
        self.ini[slot] = str(target.relative_to(self.base))
        if inferred != self.language:
            self.ini["language"] = inferred
        self.save_ini()
        self.log(f"imported {source.name} ({total >> 20:,} MB) as the {inferred.upper()}-voice disc")
        self.show_page("install")
        return True

    def choose_and_import(self) -> None:
        title = "Choose the Japanese-voice disc (Disc 2)" if self.language == "jp" else "Choose the English-voice disc (Disc 1)"
        path = filedialog.askopenfilename(title=title, filetypes=[("Disc images", "*.iso"), ("All files", "*.*")])
        if path:
            self.import_from(path)

    # ---------------- launch ----------------

    def launch_args(self) -> list[str]:
        disc = self.disc_for()
        if not disc:
            return []
        fullscreen = self.get("fullscreen", "1") == "1"
        return [
            str(self.runner),
            "--disc", str(disc),
            "--game-dir", str(self.game_dir),
            "--memcard", str(self.game_dir / ("play-japanese.ps2" if self.language == "jp" else "play-english.ps2")),
            "--fullscreen" if fullscreen else "--window",
        ]

    def launch_env(self) -> dict[str, str]:
        env = os.environ.copy()
        if self.get("scale", ""):
            env["PS2_SCALE"] = self.get("scale", "")
        if self.get("sharp", ""):
            env["PS2_SHARP_2D"] = self.get("sharp", "")
        env["PS2_LOOK"] = self.get("look", "1")
        textures = self.base / "game" / "textures"
        if textures.is_dir():
            env["PS2_TEX_OVERRIDE_DIR"] = str(textures)
        env["PS2_ASPECT"] = self.get("aspect", "16:9")
        env["PS2_EXCLUSIVE_FULLSCREEN"] = "1" if self.get("fs_mode", "exclusive") == "exclusive" else "0"
        if self.get("deinterlace", "off") == "off":
            env["PS2_NO_DEINTERLACE"] = "1"
        shader = self.resources / "game" / "blit-dedither.wgsl"
        if self.get("dedither", "1") == "1" and shader.is_file():
            env["PS2_BLIT_SHADER"] = str(shader)
        env["PS2_PRESENT_MODE"] = self.get("vsync", "fifo")
        env["PS2_FRAME_LATENCY"] = self.get("latency", "2")
        env["PS2_WINDOW_TITLE"] = TITLE
        if self.get("backend", ""):
            env["PS2_GPU_BACKEND"] = self.get("backend", "")
        return env

    def play(self) -> None:
        if not self.runner.is_file():
            messagebox.showerror(APP, f"The game runner is missing:\n{self.runner}")
            return
        disc = self.disc_for()
        if not disc:
            lang = "Disc 2 (Japanese)" if self.language == "jp" else "Disc 1 (English)"
            if messagebox.askyesno(APP, f"{lang} is not in discs/.\n\nImport it now?"):
                self.show_page("install")
                self.choose_and_import()
            return
        args = self.launch_args()
        self.log("starting: " + " ".join(args))
        try:
            self.game_dir.mkdir(parents=True, exist_ok=True)
            subprocess.Popen(args, cwd=str(self.resources / "game"), env=self.launch_env(),
                             stdin=subprocess.DEVNULL, stdout=subprocess.DEVNULL,
                             stderr=subprocess.DEVNULL, start_new_session=True)
        except OSError as exc:
            messagebox.showerror(APP, f"The game could not start:\n{exc}")
            return
        self.root.after(600, self.root.destroy)

    # ---------------- UI ----------------

    def button(self, parent: tk.Widget, text: str, command, primary: bool = False, width: int = 18) -> tk.Button:
        bg = RED if primary else CARD
        fg = INK
        active = "#8f2f3d" if primary else EDGE
        return tk.Button(parent, text=text, command=command, bg=bg, fg=fg, activebackground=active,
                         activeforeground=INK, relief="flat", bd=0, padx=14, pady=9,
                         font=("DejaVu Sans", 10, "bold" if primary else "normal"),
                         width=width, cursor="hand2", highlightthickness=0)

    def nav(self, text: str, key: str) -> None:
        b = tk.Button(self.rail, text=text, command=lambda: self.show_page(key), bg=RAIL, fg=MUTED,
                      activebackground=EDGE, activeforeground=INK, relief="flat", bd=0,
                      anchor="w", padx=26, pady=12, font=("DejaVu Sans", 11), cursor="hand2",
                      highlightthickness=0)
        b.pack(fill="x", padx=8, pady=2)
        self.nav_buttons[key] = b

    def build(self) -> None:
        self.root.title(TITLE + " - Rebloom Launcher")
        self.root.geometry("1200x800")
        self.root.minsize(1150, 740)
        self.root.configure(bg=BG)

        self.rail = tk.Frame(self.root, bg=RAIL, width=224)
        self.rail.pack(side="left", fill="y")
        self.rail.pack_propagate(False)

        brand = tk.Frame(self.rail, bg=RAIL, height=150)
        brand.pack(fill="x")
        brand.pack_propagate(False)
        logo_path = self.resources / "art" / "rail-logo.png"
        self.rail_logo_image = None
        if logo_path.is_file():
            try:
                self.rail_logo_image = tk.PhotoImage(file=str(logo_path))
                tk.Label(brand, image=self.rail_logo_image, bg=RAIL, bd=0).pack(anchor="w", padx=14, pady=(24, 0))
            except tk.TclError:
                self.rail_logo_image = None
        if self.rail_logo_image is None:
            tk.Label(brand, text="REBLOOM", bg=RAIL, fg=GOLD, font=("DejaVu Sans", 22, "bold")).pack(anchor="w", padx=24, pady=(28, 0))
            tk.Label(brand, text="SAKURA WARS V", bg=RAIL, fg=MUTED, font=("DejaVu Sans", 8, "bold")).pack(anchor="w", padx=25)
            tk.Label(brand, text="SO LONG, MY LOVE", bg=RAIL, fg=MUTED, font=("DejaVu Sans", 8)).pack(anchor="w", padx=25)

        for text, key in (("Play", "home"), ("Install", "install"), ("Settings", "settings"), ("Support", "support"), ("About", "about")):
            self.nav(text, key)
        tk.Frame(self.rail, bg=RAIL).pack(fill="both", expand=True)
        tk.Label(self.rail, text="Linux x86-64  ·  v" + VERSION, bg=RAIL, fg="#6f6156",
                 font=("DejaVu Sans", 8)).pack(anchor="w", padx=24, pady=18)

        right = tk.Frame(self.root, bg=BG)
        right.pack(side="left", fill="both", expand=True)

        self.status = tk.Label(right, text="", bg=FOOT, fg=MUTED, anchor="w", padx=18, pady=8,
                               font=("DejaVu Sans", 8))
        self.status.pack(side="bottom", fill="x")
        self.content = tk.Frame(right, bg=BG)
        self.content.pack(fill="both", expand=True)

        self.show_page("home")

    def clear(self) -> None:
        for child in self.content.winfo_children():
            child.destroy()

    def show_page(self, key: str) -> None:
        self.page = key
        for k, b in self.nav_buttons.items():
            b.configure(fg=GOLD if k == key else MUTED, bg=RAIL)
        self.clear()
        {"home": self.page_home, "install": self.page_install, "settings": self.page_settings,
         "support": self.page_support, "about": self.page_about}[key]()

    def heading(self, title: str, subtitle: str) -> tk.Frame:
        frame = tk.Frame(self.content, bg=BG)
        frame.pack(fill="x", padx=34, pady=(26, 12))
        tk.Label(frame, text=title, bg=BG, fg=INK, font=("DejaVu Sans", 20, "bold")).pack(anchor="w")
        tk.Label(frame, text=subtitle, bg=BG, fg=MUTED, font=("DejaVu Sans", 9), wraplength=680,
                 justify="left").pack(anchor="w", pady=(4, 0))
        return frame

    def card(self, parent: tk.Widget | None = None) -> tk.Frame:
        parent = parent or self.content
        frame = tk.Frame(parent, bg=CARD, highlightbackground=EDGE, highlightthickness=1)
        frame.pack(fill="x", padx=34, pady=(0, 14))
        return frame

    def page_home(self) -> None:
        banner_path = self.resources / "art" / "play-banner.png"
        self.banner_image = None
        if banner_path.is_file():
            try:
                self.banner_image = tk.PhotoImage(file=str(banner_path))
                tk.Label(self.content, image=self.banner_image, bg=BG, bd=0).pack(padx=34, pady=(18, 0))
            except tk.TclError:
                self.banner_image = None
        self.heading("Play", "Your own discs, recompiled for this machine. Nothing is uploaded.")
        disc = self.disc_for()
        card = self.card()
        inner = tk.Frame(card, bg=CARD)
        inner.pack(fill="x", padx=22, pady=18)
        tk.Label(inner, text="Disc", bg=CARD, fg=MUTED, font=("DejaVu Sans", 8, "bold")).pack(anchor="w")
        tk.Label(inner, text=disc.name if disc else "No disc imported yet", bg=CARD, fg=INK,
                 font=("DejaVu Sans", 11, "bold"), wraplength=620, justify="left").pack(anchor="w", pady=(2, 0))
        detail = ("Japanese voices (Disc 2)" if self.language == "jp" else "English voices (Disc 1)")
        tk.Label(inner, text=detail, bg=CARD, fg=MUTED, font=("DejaVu Sans", 9)).pack(anchor="w", pady=(2, 0))
        row = tk.Frame(inner, bg=CARD)
        row.pack(fill="x", pady=(14, 0))
        self.button(row, "Play", self.play, primary=True, width=14).pack(side="left")
        self.button(row, "Import disc...", self.choose_and_import, width=15).pack(side="left", padx=8)
        self.button(row, "Install page", lambda: self.show_page("install"), width=13).pack(side="left")

        card = self.card()
        inner = tk.Frame(card, bg=CARD)
        inner.pack(fill="x", padx=22, pady=16)
        tk.Label(inner, text="Voice language", bg=CARD, fg=MUTED, font=("DejaVu Sans", 8, "bold")).pack(anchor="w")
        row = tk.Frame(inner, bg=CARD)
        row.pack(anchor="w", pady=(6, 0))
        for label, lang in (("English (Disc 1)", "en"), ("Japanese (Disc 2)", "jp")):
            self.button(row, ("● " if self.language == lang else "○ ") + label,
                        lambda l=lang: self.set_language(l), width=20).pack(side="left", padx=(0, 8))
        tk.Label(inner, text="Japanese voices require importing Disc 2. Import both discs to switch freely.",
                 bg=CARD, fg=MUTED, font=("DejaVu Sans", 8)).pack(anchor="w", pady=(8, 0))

        card = self.card()
        stats = tk.Frame(card, bg=CARD)
        stats.pack(fill="x", padx=22, pady=12)
        tk.Label(stats, text="Runner", bg=CARD, fg=MUTED, font=("DejaVu Sans", 8, "bold")).grid(row=0, column=0, sticky="w")
        tk.Label(stats, text="found" if self.runner.is_file() else "MISSING", bg=CARD,
                 fg=GOOD if self.runner.is_file() else BAD, font=("DejaVu Sans", 9)).grid(row=0, column=1, sticky="w", padx=12)
        tk.Label(stats, text="De-dither", bg=CARD, fg=MUTED, font=("DejaVu Sans", 8, "bold")).grid(row=1, column=0, sticky="w", pady=(4, 0))
        tk.Label(stats, text="On (temporal 8×8)" if self.get("dedither", "1") == "1" else "Off", bg=CARD,
                 fg=INK, font=("DejaVu Sans", 9)).grid(row=1, column=1, sticky="w", padx=12, pady=(4, 0))
        tk.Label(stats, text="Settings", bg=CARD, fg=MUTED, font=("DejaVu Sans", 8, "bold")).grid(row=2, column=0, sticky="w", pady=(4, 0))
        tk.Label(stats, text=f"{self.get('aspect', '16:9')}  ·  look {self.get('look', '1')}  ·  "
                             f"{'fullscreen' if self.get('fullscreen', '1') == '1' else 'window'}",
                 bg=CARD, fg=INK, font=("DejaVu Sans", 9)).grid(row=2, column=1, sticky="w", padx=12, pady=(4, 0))

    def set_language(self, lang: str) -> None:
        self.set("language", lang)
        self.log("voice language: " + ("Japanese (Disc 2)" if lang == "jp" else "English (Disc 1)"))
        self.show_page(self.page)

    def page_install(self) -> None:
        self.heading("Install", "Import a copy of your own disc. The copy in discs/ is what the game uses, so the original can be deleted.")
        card = self.card()
        inner = tk.Frame(card, bg=CARD)
        inner.pack(fill="x", padx=22, pady=16)
        tk.Label(inner, text="discs/", bg=CARD, fg=MUTED, font=("DejaVu Sans", 8, "bold")).pack(anchor="w")
        tk.Label(inner, text=str(self.discs), bg=CARD, fg=INK, font=("DejaVu Sans", 9)).pack(anchor="w", pady=(2, 8))

        found = sorted(self.discs.glob("*.iso")) if self.discs.is_dir() else []
        if not found:
            tk.Label(inner, text="No disc images imported.", bg=CARD, fg=MUTED, font=("DejaVu Sans", 9)).pack(anchor="w", pady=4)
        for iso in found:
            lang = self.serial_language(iso) or self.name_language(iso)
            label = {"en": "English voices", "jp": "Japanese voices"}.get(lang, "disc")
            row = tk.Frame(inner, bg=CARD)
            row.pack(fill="x", pady=3)
            tk.Label(row, text=iso.name, bg=CARD, fg=INK, font=("DejaVu Sans", 9)).pack(side="left")
            tk.Label(row, text=f"  {label}  ·  {iso.stat().st_size / (1 << 30):.2f} GB", bg=CARD, fg=MUTED,
                     font=("DejaVu Sans", 8)).pack(side="left")

        row = tk.Frame(inner, bg=CARD)
        row.pack(fill="x", pady=(12, 0))
        self.button(row, "Import disc image...", self.choose_and_import, primary=True, width=18).pack(side="left")
        self.button(row, "Open discs folder", lambda: self.open_path(self.discs), width=16).pack(side="left", padx=8)
        self.button(row, "Play", self.play, width=10).pack(side="left")

        card = self.card()
        inner = tk.Frame(card, bg=CARD)
        inner.pack(fill="x", padx=22, pady=14)
        tk.Label(inner, text="Disc 1 has English voices. Disc 2 has Japanese voices. Import both to switch languages.",
                 bg=CARD, fg=INK, font=("DejaVu Sans", 9), wraplength=650, justify="left").pack(anchor="w")
        tk.Label(inner, text="Only a plain .iso is accepted. The import checks the disc's boot file and copies it in full.",
                 bg=CARD, fg=MUTED, font=("DejaVu Sans", 8), wraplength=650, justify="left").pack(anchor="w", pady=(4, 0))

    def stepper(self, parent: tk.Frame, row: int, label: str, key: str, values: list[tuple[str, str]], fallback: str,
                note: str = "") -> None:
        current = self.get(key, fallback)
        idx = next((i for i, (_, v) in enumerate(values) if v == current), 0)
        tk.Label(parent, text=label, bg=CARD, fg=INK, font=("DejaVu Sans", 9)).grid(row=row, column=0, sticky="w", pady=4)
        holder = tk.Frame(parent, bg=CARD)
        holder.grid(row=row, column=1, sticky="w", padx=(16, 0), pady=4)
        value_label = tk.Label(holder, text=values[idx][0], bg=CARD, fg=GOLD, width=22,
                               font=("DejaVu Sans", 9, "bold"))

        def change(delta: int) -> None:
            nonlocal idx
            idx = max(0, min(len(values) - 1, idx + delta))
            value_label.configure(text=values[idx][0])
            self.set(key, values[idx][1])

        tk.Button(holder, text="‹", command=lambda: change(-1), bg=CARD, fg=INK, activebackground=EDGE,
                  relief="flat", bd=0, padx=7, cursor="hand2", font=("DejaVu Sans", 11, "bold")).pack(side="left")
        value_label.pack(side="left", padx=4)
        tk.Button(holder, text="›", command=lambda: change(1), bg=CARD, fg=INK, activebackground=EDGE,
                  relief="flat", bd=0, padx=7, cursor="hand2", font=("DejaVu Sans", 11, "bold")).pack(side="left")
        if note:
            tk.Label(parent, text=note, bg=CARD, fg=MUTED, font=("DejaVu Sans", 8)).grid(row=row, column=2, sticky="w", padx=12)

    # ---------------- binding editors ----------------

    def save_binding(self, path: Path, action: str, value: str) -> None:
        lines: list[str] = []
        if path.is_file():
            lines = path.read_text(encoding="utf-8", errors="replace").splitlines()
        found = False
        for i, raw in enumerate(lines):
            line = raw.strip()
            if not line or line[0] in ";#":
                continue
            name, sep, _ = line.partition("=")
            if sep and name.strip().lower() == action:
                lines[i] = f"{action} = {value}"
                found = True
                break
        if not found:
            lines.append(f"{action} = {value}")
        path.parent.mkdir(parents=True, exist_ok=True)
        path.write_text("\n".join(lines) + "\n", encoding="utf-8")

    def save_gamepad(self, path: Path, values: dict[str, str]) -> None:
        lines = [
            "# gamepad.ini: which controller button works which game button.",
            "# SDL names; 'none' turns a button off. Delete this file for the standard mapping.",
        ]
        for action, _, default in PAD_ACTIONS:
            lines.append(f"{action:<10} = {values.get(action, default)}")
        path.parent.mkdir(parents=True, exist_ok=True)
        path.write_text("\n".join(lines) + "\n", encoding="utf-8")

    def capture_key(self, parent: tk.Toplevel, action_label: str, apply) -> tk.Toplevel:
        cap = tk.Toplevel(parent)
        cap.title("Press a key")
        cap.configure(bg=BG)
        cap.geometry("460x150")
        cap.resizable(False, False)
        cap.transient(parent)
        tk.Label(cap, text=f"Press the key for {action_label}.", bg=BG, fg=INK,
                 font=("DejaVu Sans", 11, "bold")).pack(anchor="w", padx=20, pady=(20, 4))
        hint = tk.Label(cap, text="Esc, F1, F2, F5, F8, F9 and F11 belong to the program.",
                        bg=BG, fg=MUTED, font=("DejaVu Sans", 8))
        hint.pack(anchor="w", padx=20)

        def on_key(event) -> str:
            if event.keysym in PROGRAM_KEYS:
                hint.configure(text="That key belongs to the program. Press another one.", fg=GOLD)
                return "break"
            name = key_name(event.keysym)
            if name is None:
                hint.configure(text="That key has no name the game can use. Press another one.", fg=GOLD)
                return "break"
            apply(name)
            cap.destroy()
            return "break"

        cap.bind("<KeyPress>", on_key)
        cap.grab_set()
        cap.focus_force()
        return cap

    def apply_key(self, path: Path, values: dict[str, str], action: str, name: str, label: tk.Label) -> None:
        values[action] = name
        try:
            self.save_binding(path, action, name)
        except OSError as exc:
            messagebox.showerror(APP, f"Could not write {path}:\n{exc}")
            return
        label.configure(text=name)
        self.log(f"keyboard: {action} = {name}")

    def edit_keyboard(self) -> None:
        path = self.game_dir / "keys.ini"
        if not path.is_file():
            messagebox.showinfo(APP, "Start the game once first, so it writes keys.ini.")
            return
        values = read_bindings(path)
        win = tk.Toplevel(self.root)
        win.title("Keyboard controls")
        win.configure(bg=BG)
        win.geometry("720x640")
        win.transient(self.root)
        tk.Label(win, text="Keyboard controls", bg=BG, fg=INK,
                 font=("DejaVu Sans", 16, "bold")).pack(anchor="w", padx=20, pady=(16, 2))
        tk.Label(win, text="Click Change, then press the new key. The game reads keys.ini when you return to its window.",
                 bg=BG, fg=MUTED, font=("DejaVu Sans", 9), wraplength=660,
                 justify="left").pack(anchor="w", padx=20, pady=(0, 8))
        outer = tk.Frame(win, bg=BG)
        outer.pack(fill="both", expand=True, padx=20, pady=(0, 8))
        canvas = tk.Canvas(outer, bg=BG, highlightthickness=0)
        bar = ttk.Scrollbar(outer, orient="vertical", command=canvas.yview)
        body = tk.Frame(canvas, bg=BG)
        body_window = canvas.create_window((0, 0), window=body, anchor="nw")
        canvas.configure(yscrollcommand=bar.set)
        canvas.pack(side="left", fill="both", expand=True)
        bar.pack(side="right", fill="y")
        body.bind("<Configure>", lambda e: canvas.configure(scrollregion=canvas.bbox("all")))
        canvas.bind("<Configure>", lambda e: canvas.itemconfigure(body_window, width=e.width))

        for action, label in KEY_ACTIONS:
            row = tk.Frame(body, bg=CARD)
            row.pack(fill="x", pady=2)
            tk.Label(row, text=label, bg=CARD, fg=INK, width=20, anchor="w",
                     font=("DejaVu Sans", 9)).pack(side="left", padx=10, pady=5)
            value = tk.Label(row, text=values.get(action, ""), bg=CARD, fg=GOLD, width=24,
                             anchor="w", font=("DejaVu Sans", 9))
            value.pack(side="left")
            self.binding_change_button(row, label, action, path, values, value)
        tk.Label(win, text=f"File: {path}", bg=BG, fg=MUTED,
                 font=("DejaVu Sans", 8)).pack(anchor="w", padx=20, pady=(0, 12))

    def binding_change_button(self, row: tk.Frame, label: str, action: str, path: Path,
                              values: dict[str, str], value: tk.Label) -> None:
        def change() -> None:
            self.capture_key(row.winfo_toplevel(), label,
                             lambda name: self.apply_key(path, values, action, name, value))
        tk.Button(row, text="Change", command=change, bg=EDGE, fg=INK, activebackground=EDGE,
                  relief="flat", bd=0, padx=14, pady=2, cursor="hand2").pack(side="right", padx=10)

    def edit_gamepad(self) -> None:
        path = self.game_dir / "gamepad.ini"
        values = read_bindings(path)
        win = tk.Toplevel(self.root)
        win.title("Gamepad controls")
        win.configure(bg=BG)
        win.geometry("620x600")
        win.transient(self.root)
        tk.Label(win, text="Gamepad controls", bg=BG, fg=INK,
                 font=("DejaVu Sans", 16, "bold")).pack(anchor="w", padx=20, pady=(16, 2))
        tk.Label(win, text="Choose the controller button for each game action. Start, Select and the triggers stay standard; L3 and R3 map the stick presses.",
                 bg=BG, fg=MUTED, font=("DejaVu Sans", 9), wraplength=570,
                 justify="left").pack(anchor="w", padx=20, pady=(0, 8))
        body = tk.Frame(win, bg=BG)
        body.pack(fill="both", expand=True, padx=20)
        labels = [label for label, _ in PAD_CHOICES]
        tokens = {label: token for label, token in PAD_CHOICES}
        reverse = {token: label for label, token in PAD_CHOICES}
        for action, label, default in PAD_ACTIONS:
            row = tk.Frame(body, bg=CARD)
            row.pack(fill="x", pady=2)
            tk.Label(row, text=label, bg=CARD, fg=INK, width=18, anchor="w",
                     font=("DejaVu Sans", 9)).pack(side="left", padx=10, pady=5)
            box = ttk.Combobox(row, values=labels, state="readonly", width=20)
            box.set(reverse.get(values.get(action, default), "None"))
            box.pack(side="right", padx=10)

            def chosen(event=None, a=action, b=box) -> None:
                token = tokens.get(b.get(), "none")
                values[a] = token
                try:
                    self.save_gamepad(path, values)
                except OSError as exc:
                    messagebox.showerror(APP, f"Could not write {path}:\n{exc}")
                    return
                self.log(f"gamepad: {a} = {token}")

            box.bind("<<ComboboxSelected>>", chosen)
        tk.Label(win, text=f"File: {path}", bg=BG, fg=MUTED,
                 font=("DejaVu Sans", 8)).pack(anchor="w", padx=20, pady=(0, 12))

    def page_settings(self) -> None:
        self.heading("Settings", "Changes are saved immediately and used the next time the game starts.")
        card = self.card()
        inner = tk.Frame(card, bg=CARD)
        inner.pack(fill="x", padx=22, pady=14)
        tk.Label(inner, text="Display", bg=CARD, fg=GOLD, font=("DejaVu Sans", 10, "bold")).grid(row=0, column=0, columnspan=3, sticky="w", pady=(0, 4))
        self.stepper(inner, 1, "Window", "fullscreen", [("Windowed", "0"), ("Fullscreen", "1")], "1")
        self.stepper(inner, 2, "Fullscreen mode", "fs_mode", [("Borderless", "borderless"), ("Exclusive", "exclusive")], "exclusive")
        self.stepper(inner, 3, "Aspect", "aspect", [("4:3 (original)", "4:3"), ("16:9 (stretch)", "16:9")], "16:9",
                     "True Hor+ widescreen needs a game patch that does not exist for this disc.")
        self.stepper(inner, 4, "VSync", "vsync", [("On (fifo)", "fifo"), ("Off (immediate)", "immediate")], "fifo")
        self.stepper(inner, 5, "Frame latency", "latency", [("1", "1"), ("2", "2"), ("3", "3")], "2")

        card = self.card()
        inner = tk.Frame(card, bg=CARD)
        inner.pack(fill="x", padx=22, pady=14)
        tk.Label(inner, text="Graphics", bg=CARD, fg=GOLD, font=("DejaVu Sans", 10, "bold")).grid(row=0, column=0, columnspan=3, sticky="w", pady=(0, 4))
        self.stepper(inner, 1, "Picture look", "look", [
            ("Crisp", "0"), ("Crisp + edges", "1"), ("Soft", "2"), ("Soft + edges", "3"),
            ("Sharp", "4"), ("Sharp + edges", "5")], "1")
        self.stepper(inner, 2, "Render scale", "scale", [("1x (native)", ""), ("2x", "2"), ("3x", "3")], "3")
        self.stepper(inner, 3, "Deinterlace", "deinterlace", [("Blend (smooth)", "blend"), ("Off (sharp)", "off")], "off")
        self.stepper(inner, 4, "GPU backend", "backend", [("Automatic", ""), ("Vulkan", "vulkan"), ("OpenGL", "opengl")], "")

        card = self.card()
        inner = tk.Frame(card, bg=CARD)
        inner.pack(fill="x", padx=22, pady=14)
        tk.Label(inner, text="Advanced", bg=CARD, fg=GOLD, font=("DejaVu Sans", 10, "bold")).grid(row=0, column=0, columnspan=3, sticky="w", pady=(0, 4))
        self.stepper(inner, 1, "De-dither", "dedither", [("On (soften fades)", "1"), ("Off", "0")], "1",
                     "Temporal 8×8 pattern-aware; smoother fades and video, lighter at edges.")
        self.stepper(inner, 2, "When opened", "bypass", [("Show the launcher", "0"), ("Play immediately", "1")], "0")
        row = tk.Frame(inner, bg=CARD)
        row.grid(row=3, column=0, columnspan=3, sticky="w", pady=(10, 0))
        self.button(row, "Clear game cache", self.clear_cache, width=16).pack(side="left")
        self.button(row, "Open launcher.ini", lambda: self.open_path(self.ini_path), width=16).pack(side="left", padx=8)
        tk.Label(inner, text="Clearing game cache removes translated-code caches, logs and states in game/data.",
                 bg=CARD, fg=MUTED, font=("DejaVu Sans", 8), wraplength=650, justify="left").grid(
            row=4, column=0, columnspan=3, sticky="w", pady=(8, 0))

        card = self.card()
        inner = tk.Frame(card, bg=CARD)
        inner.pack(fill="x", padx=22, pady=14)
        tk.Label(inner, text="Controls", bg=CARD, fg=GOLD,
                 font=("DejaVu Sans", 10, "bold")).pack(anchor="w", pady=(0, 2))
        tk.Label(inner, text="Keyboard and gamepad bindings. The game reads the files when you return to its window.",
                 bg=CARD, fg=MUTED, font=("DejaVu Sans", 8), wraplength=650,
                 justify="left").pack(anchor="w", pady=(0, 8))
        row = tk.Frame(inner, bg=CARD)
        row.pack(fill="x")
        self.button(row, "Keyboard controls...", self.edit_keyboard, width=20).pack(side="left")
        self.button(row, "Gamepad controls...", self.edit_gamepad, width=20).pack(side="left", padx=8)
        self.button(row, "Open keys.ini", lambda: self.open_path(self.game_dir / "keys.ini"), width=14).pack(side="left", padx=8)
        self.button(row, "Open gamepad.ini", lambda: self.open_path(self.game_dir / "gamepad.ini"), width=17).pack(side="left")

    def clear_cache(self) -> None:
        if not messagebox.askyesno(APP, "Clear translated-code caches, logs and states in game/data?\n\nMemory cards are kept."):
            return
        data = self.game_dir
        for name in ("logs", "states", "vu1-live", "ee-live", "cache"):
            path = data / name
            if path.is_dir():
                shutil.rmtree(path, ignore_errors=True)
        self.log("game cache cleared")
        messagebox.showinfo(APP, "Game cache cleared. Memory cards were kept.")

    def page_support(self) -> None:
        self.heading("Support", "What the launcher did, and where things are. Nothing is uploaded.")
        card = self.card()
        inner = tk.Frame(card, bg=CARD)
        inner.pack(fill="x", padx=22, pady=16)
        row = tk.Frame(inner, bg=CARD)
        row.pack(fill="x")
        self.button(row, "Open game folder", lambda: self.open_path(self.game_dir), width=17).pack(side="left")
        self.button(row, "Open logs", self.open_logs, width=12).pack(side="left", padx=8)
        self.button(row, "Copy diagnostics", self.copy_diag, width=16).pack(side="left")
        tk.Label(inner, text=self.diagnostics(), bg=CARD, fg=MUTED, font=("DejaVu Sans", 8),
                 justify="left", anchor="w").pack(fill="x", pady=(12, 0))

    def diagnostics(self) -> str:
        return (f"{APP} {VERSION}\n"
                f"data: {self.base}\n"
                f"program: {self.resources}\n"
                f"runner: {self.runner} ({'found' if self.runner.is_file() else 'MISSING'})\n"
                f"disc: {self.disc_for() or 'none'}\n"
                f"language: {self.language}\n"
                f"de-dither: {'on' if self.get('dedither', '1') == '1' else 'off'}\n"
                f"settings: {self.ini_path}")

    def copy_diag(self) -> None:
        self.root.clipboard_clear()
        self.root.clipboard_append(self.diagnostics() + "\n\n" + "\n".join(self.log_lines))
        self.log("diagnostics copied to the clipboard")

    def open_logs(self) -> None:
        logs = self.game_dir / "logs"
        if logs.is_dir():
            self.open_path(logs)
        else:
            messagebox.showinfo(APP, "No game logs yet. Start the game once first.")
            self.open_path(self.base / "game")

    def open_path(self, path: Path) -> None:
        try:
            if not path.exists():
                path.parent.mkdir(parents=True, exist_ok=True)
            subprocess.Popen(["xdg-open", str(path)], stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
        except OSError as exc:
            messagebox.showerror(APP, f"Could not open {path}:\n{exc}")

    def page_about(self) -> None:
        self.heading("About", f"{APP} {VERSION} - a static recompilation of Sakura Wars V: So Long, My Love (PS2).")
        card = self.card()
        inner = tk.Frame(card, bg=CARD)
        inner.pack(fill="x", padx=22, pady=16)
        text = (
            "This package contains the recompiled runtime and launcher. It does not contain the game. "
            "You need your own legally acquired disc image.\n\n"
            "The game code is translated ahead of time. Parts the build did not see are translated while you play; "
            "those first moments can run slowly, then stay translated for the next start.\n\n"
            "Rebloom is a fan project. Sakura Wars is a trademark of SEGA. No game data is included or uploaded."
        )
        tk.Label(inner, text=text, bg=CARD, fg=INK, font=("DejaVu Sans", 9), wraplength=650,
                 justify="left").pack(anchor="w")
        tk.Label(inner, text="Launcher design follows the ReDUB launcher's model.", bg=CARD, fg=MUTED,
                 font=("DejaVu Sans", 8)).pack(anchor="w", pady=(12, 0))


def main() -> int:
    parser = argparse.ArgumentParser(add_help=False)
    parser.add_argument("--import", dest="import_path")
    parser.add_argument("--play", action="store_true")
    parser.add_argument("--launcher", action="store_true")
    args, _ = parser.parse_known_args()

    root = tk.Tk()
    try:
        root.tk.call("tk", "scaling", 1.25)
    except tk.TclError:
        pass
    Launcher(root, auto_play=args.play, import_path=args.import_path)
    root.mainloop()
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
