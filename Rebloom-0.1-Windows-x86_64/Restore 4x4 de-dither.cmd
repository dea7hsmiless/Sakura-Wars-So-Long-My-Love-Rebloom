@echo off
cd /d "%~dp0"
if exist "game\blit-dedither-4x4-backup.wgsl" copy /y "game\blit-dedither-4x4-backup.wgsl" "game\blit-dedither.wgsl" >nul
start "" "Rebloom Launcher.exe"
