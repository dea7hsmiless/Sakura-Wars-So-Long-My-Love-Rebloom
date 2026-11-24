# Third-party components

This drop contains **no** third-party binaries. It contains source written for this project plus
a patch and configuration for one upstream project that you fetch yourself. The components you
will end up running, and their licences:

| Component | Used for | Licence | Where |
|---|---|---|---|
| **ps2-native-recomp** | the recompiler, runtime and runner | MIT | https://github.com/exoteric33/ps2-native-recomp |
| **ps2-web-recomp** | the code generator ps2-native-recomp is built on | MIT | https://github.com/snuri00/ps2-web-recomp |
| **wgpu-native** | Vulkan / Direct3D 12 backend | Apache-2.0 OR MIT | https://github.com/gfx-rs/wgpu-native |
| **SDL2** | window, input, audio device | zlib | https://github.com/libsdl-org/SDL |
| **DirectX Shader Compiler (DXC)** | D3D12 shader compilation | MIT (LLVM) | https://github.com/microsoft/DirectXShaderCompiler |
| **pycdlib** | ISO 9660 writing in `make-iso.py` | LGPL-2.1 | https://github.com/clalancette/pycdlib |

`make-iso.py` imports pycdlib at runtime; it is not vendored, so nothing LGPL is redistributed
here. Install it with `python -m pip install pycdlib`.

## On the launcher's design

`launcher/Launcher.cs` is original code, written for this project. Its layout ideas — a brand
banner, a left rail, rounded buttons, one settings page per topic — follow the ReDUB launcher
(a fan project for Midnight Club 3, itself derived from community launchers), because that is
the shape the project owner asked for. No ReDUB source was copied into this file; the settings
model, visuals and behaviour are specific to this game and to ps2-native-recomp.

## Game content

None. No disc image, no extracted archive, no BIOS, no save file, no artwork from the game.
Sakura Wars and all related names and characters are trademarks of their respective owners.
You need your own discs to use any of this.
