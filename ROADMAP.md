# Platform roadmap

Windows 0.1 is feature-complete for this release. Linux, Android and iOS build from the same
translated code; only Windows has been played past the opening.

## Windows 0.1 — release candidate

- [x] Launcher, import, settings, bypass, exclusive/borderless full screen
- [x] Keyboard and gamepad editing in the launcher (arrows/Tab/Enter capture fixed)
- [x] Binding files ship with defaults and reload in-game within a second
- [x] Package, checksums, screenshots, release verifier, local Git history
- [ ] Play a battle (chapter 1)
- [ ] Listen to the audio by ear
- [ ] Save/load round trip through the game's own menu
- [ ] Disc 2 gameplay past boot
- [ ] Clean Windows account or second PC
- [ ] Create the GitHub repo/tag and upload the assets
- [ ] Replace the download table in `RELEASE-PAGE.md` with live URLs

## Linux — package built

- [x] Build the generated game + runtime with clang/CMake on Linux
- [x] Native Tk launcher: import, language, display/graphics, controls editors, play
- [x] Vulkan path, keyboard and controller input
- [x] Portable layout: `discs/`, `game/`, `launcher.ini`
- [x] Tar.gz + AppImage packages, checksums, README; boot-tested under WSLg
- [ ] Install on a clean distro and play a chapter
- [ ] Keep the same no-ISO, own-disc rules

## Android — APK built

- [x] arm64 NDK build of the runtime and generated C++
- [x] SDL2 + wgpu Vulkan Android surface
- [x] Controller support
- [x] SAF file picker that copies the ISO into app storage
- [x] Gradle project, icons, five-page rail launcher, debug-signed APK
- [x] Touch overlay (stick, face buttons, shoulders, Start/Select, tap-to-advance)
- [ ] Remove the runtime `clang++` path; ship precompiled code/VU coverage for unseen code
- [ ] Test 1x/720p on a real phone, then a mid-range device
- [ ] Install and sign-off notes for sideloading

## iOS — IPA built

- [x] Metal backend through wgpu + SDL2 iOS
- [x] Native UIKit launcher, Files import, local storage
- [x] Icons, Info.plist, unsigned IPA and packaging script
- [ ] Signing and install on a device (needs the user's certificate)
- [x] Touch overlay (stick, face buttons, shoulders, Start/Select, tap-to-advance) and controller support
- [ ] No JIT and no compiler on device: all reachable EE/VU code must be precompiled
- [ ] Memory/thermal testing on device
- [ ] Install notes; no App Store claim

## Shared prerequisite

The current runtime translates unseen code while it runs. Android and iOS cannot ship a
compiler on the device, so the mobile ports depend on complete precompiled coverage. That means
the battle and Disc 2 coverage work comes before mobile can be called finished.
