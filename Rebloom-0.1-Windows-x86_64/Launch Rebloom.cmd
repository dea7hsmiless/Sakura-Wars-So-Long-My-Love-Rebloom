@echo off
cd /d "%~dp0"
if not exist "Rebloom Launcher.exe" (
  powershell.exe -NoProfile -ExecutionPolicy Bypass -File "%~dp0source\Build-Launcher.ps1" -NoShortcut
  if exist "%~dp0source\Rebloom Launcher.exe" move /y "%~dp0source\Rebloom Launcher.exe" "%~dp0Rebloom Launcher.exe" >nul
)
if not exist "Rebloom Launcher.exe" (
  echo Rebloom Launcher.exe is missing and could not be built.
  pause
  exit /b 1
)
start "" "%~dp0Rebloom Launcher.exe"
