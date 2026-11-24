# Compiles the Rebloom Launcher with the C# compiler that ships with Windows.
# No Visual Studio, no SDK, no NuGet.
param(
    [switch]$ShortcutsOnly,
    [switch]$NoShortcut,
    [string]$OutPath
)

$ErrorActionPreference = 'Stop'
$here = $PSScriptRoot
$source = Join-Path $here 'Launcher.cs'
$exe = if ($OutPath) { $OutPath } else { Join-Path $here 'Rebloom Launcher.exe' }
$compiler = Join-Path $env:WINDIR 'Microsoft.NET\Framework64\v4.0.30319\csc.exe'

if (-not (Test-Path -LiteralPath $compiler)) {
    throw 'The .NET Framework 4 C# compiler is missing (Windows\Microsoft.NET\Framework64\v4.0.30319\csc.exe).'
}
if (-not (Test-Path -LiteralPath $source)) {
    throw 'Launcher.cs is missing beside this script.'
}

if (-not $ShortcutsOnly) {
    $candidateDir = Join-Path $here '.build'
    New-Item -ItemType Directory -Force -Path $candidateDir | Out-Null
    $candidate = Join-Path $candidateDir 'Rebloom Launcher.exe'

    # The icon lives in art\ beside the launcher (release) or one folder up (source\ in the package).
    $icon = @((Join-Path $here 'art\icon.ico'), (Join-Path (Split-Path -Parent $here) 'art\icon.ico')) |
        Where-Object { Test-Path -LiteralPath $_ } | Select-Object -First 1
    $iconArg = @()
    if ($icon) { $iconArg = @("/win32icon:$icon") }
    $manifest = Join-Path $here 'app.manifest'
    $manifestArg = @()
    if (Test-Path -LiteralPath $manifest) { $manifestArg = @("/win32manifest:$manifest") }

    & $compiler /nologo /target:winexe /platform:x64 /optimize+ /debug- /codepage:65001 @iconArg @manifestArg `
        /reference:System.Windows.Forms.dll /reference:System.Drawing.dll `
        "/out:$candidate" $source
    if ($LASTEXITCODE -ne 0) { throw 'Launcher compilation failed.' }

    try { Move-Item -LiteralPath $candidate -Destination $exe -Force }
    catch { throw "Compiled, but Windows has Rebloom Launcher.exe open. Close it and rerun. The new build is at $candidate" }
    Remove-Item -LiteralPath $candidateDir -Recurse -Force -ErrorAction SilentlyContinue
}

if (-not $NoShortcut) {
    $shell = New-Object -ComObject WScript.Shell
    $link = $shell.CreateShortcut((Join-Path ([Environment]::GetFolderPath('Desktop')) 'Sakura Wars V - Rebloom.lnk'))
    $link.TargetPath = $exe
    $link.WorkingDirectory = Split-Path -Parent $exe
    $link.Description = 'Sakura Wars V: So Long, My Love - Rebloom'
    $link.Save()
}

Write-Host "Launcher ready: $exe"
