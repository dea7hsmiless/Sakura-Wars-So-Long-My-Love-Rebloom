# Rebloom 0.1

Source and release assets for **Sakura Wars V: So Long, My Love — Rebloom**, a static
recompilation built on `ps2-native-recomp`, for Windows, Linux, Android (arm64) and iOS (arm64).

Nothing has been published. The release downloads in this folder are:

| File | Platform | Size |
|---|---|---|
| `Rebloom-0.1-Windows-x86_64.zip` | Windows 10/11 x64 | 44.8 MB |
| `Rebloom-0.1-Linux-x86_64.tar.gz` | Linux x86-64 (glibc 2.39+) | 33.6 MB |
| `Rebloom-0.1-x86_64.AppImage` | Linux x86-64, self-contained | 32.8 MB |
| `mobile/android/dist/Rebloom-0.1-android-arm64.apk` | Android 9+ arm64, debug-signed | 49.3 MB |
| `mobile/ios/dist/Rebloom-0.1-ios-unsigned.ipa` | iOS 16.4+ arm64, unsigned | 22.3 MB |

`SHA256SUMS.txt` has the hashes; `Verify-Rebloom.ps1` checks every download that is present.
The Android build installs by sideloading. The iOS IPA needs the user's own signing.
The AppImage keeps discs, saves and settings in `~/.local/share/rebloom` (or `REBLOOM_HOME`).

## Layout

| Path | What it is |
|---|---|
| `Rebloom-0.1-Windows-x86_64/` | extracted Windows package, player readme and full source |
| `Rebloom-0.1-Windows-x86_64/source/` | launcher, build script, full rebuild source, toolkit patch |
| `Rebloom-0.1-Linux-x86_64/` | Linux package: self-contained launcher, game, shader, default bindings |
| `Rebloom-0.1-x86_64.AppImage` | single-file Linux build; data goes to `~/.local/share/rebloom` |
| `linux/` | Linux launcher source, AppImage recipe and package docs |
| `mobile/android/` | Gradle project, Java launcher, native glue and the built APK |
| `mobile/ios/` | Objective-C launcher, packaging script, icons and the built IPA |
| `RELEASE-PAGE.md` | release body, screenshots and checksums |
| `RELEASE-HANDOFF.md` | what was verified and what is still open |
| `LAUNCHER-AUDIT.md` | launcher findings and fixes |
| `ROADMAP.md` | platform status |
| `screenshots/` | launcher and game images |
| `Verify-Rebloom.ps1` | checks the release downloads against `SHA256SUMS.txt` |

## Build

Windows launcher (no Visual Studio needed):

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File Rebloom-0.1-Windows-x86_64/source/Build-Launcher.ps1 -NoShortcut
```

The game executable is built from the translated C++ in `source/recomp/`; see
`source/REBUILD.md` and `source/BUILDING.md`. The launcher source is a single C# file compiled
by the .NET Framework 4 `csc.exe` that ships with Windows.

Linux launcher (PyInstaller, from WSL or Linux):

```bash
cd /root/rebloom && ./venv/bin/pyinstaller --noconfirm \
  --distpath dist --workpath pyi "pyi/Rebloom Launcher.spec"
```

Android (arm64, NDK 30):

```powershell
cd mobile/android
java -classpath gradle/wrapper/gradle-wrapper.jar org.gradle.wrapper.GradleWrapperMain --no-daemon assembleDebug
```

iOS (unsigned IPA, from Windows with the iPhoneOS SDK and Swift clang):

```powershell
python mobile/ios/build_ios.py
```

Linux AppImage (after the PyInstaller launcher and package are current):

```bash
cd /root/rebloom
ARCH=x86_64 ./squashfs-root/AppRun --no-appstream appimage/Rebloom.AppDir Rebloom-0.1-x86_64.AppImage
```

## Verify a download

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File .\Verify-Rebloom.ps1
```

No game data, disc image or memory card is tracked. You need your own discs.
