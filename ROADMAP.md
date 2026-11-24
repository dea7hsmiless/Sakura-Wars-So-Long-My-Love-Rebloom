# Platform roadmap

Windows 0.1 is the current release. Mobile and Linux are separate ports, not repackages.

## Windows 0.1 — finish first

- [x] Launcher, import, settings, bypass, exclusive/borderless full screen
- [x] Package, checksums, screenshots, release verifier, local Git history
- [ ] Play a battle (chapter 1)
- [ ] Listen to the audio by ear
- [ ] Save/load round trip through the game's own menu
- [ ] Disc 2 gameplay past boot
- [ ] Clean Windows account or second PC
- [ ] Create the GitHub repo/tag and upload the zip + screenshots
- [ ] Replace the local paths in `RELEASE-PAGE.md` with the live URLs

## Linux — next

The runtime already builds and runs on Linux; the Windows launcher does not.

- [ ] Build the generated game + runtime with clang/CMake on Linux
- [ ] Ship a small native launcher (or a CLI first): import ISO, language, display settings, play
- [ ] Vulkan path and controller/keyboard input
- [ ] Portable folder layout matching Windows: `discs/`, `game/`, launcher settings
- [ ] Tar.gz package, checksums, README, test on a clean distro
- [ ] Keep the same no-ISO, own-disc rules

## Android — after Linux

- [ ] arm64 NDK build of the runtime and generated C++
- [ ] SDL2 + wgpu Vulkan Android surface
- [ ] Touch overlay (stick, face buttons, Start/Select) and controller support
- [ ] SAF file picker that copies the ISO into app storage
- [ ] Remove the runtime `clang++` path; ship precompiled code/VU coverage
- [ ] Test 1x/720p on a real phone, then a mid-range device
- [ ] APK, checksums, install notes; sideloading, not a store release

## iOS — last

- [ ] Metal backend through wgpu + SDL2 iOS
- [ ] Xcode project, signing and IPA/sideload path (requires a Mac)
- [ ] No JIT and no compiler on device: all reachable EE/VU code must be precompiled
- [ ] Files-app ISO import and local storage plan for a 3.6/7.17 GB image
- [ ] Touch overlay and controller support
- [ ] Memory/thermal testing on device
- [ ] IPA, checksums, install notes; no App Store claim

## Shared prerequisite

The current Windows build translates unseen code while it runs. Android and iOS cannot ship a
compiler on the device, so the mobile ports depend on complete precompiled coverage. That means
the battle and Disc 2 coverage work comes before mobile, not after it.
