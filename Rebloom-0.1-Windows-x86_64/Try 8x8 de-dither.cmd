@echo off
cd /d "%~dp0"
if not exist "game\blit-dedither-4x4-backup.wgsl" copy /y "game\blit-dedither.wgsl" "game\blit-dedither-4x4-backup.wgsl" >nul
copy /y "game\blit-dedither-8x8.wgsl" "game\blit-dedither.wgsl" >nul
start "" "Rebloom Launcher.exe"
