param(
    [string]$Zip = (Join-Path $PSScriptRoot 'Rebloom-0.1-Windows-x86_64.zip')
)

$ErrorActionPreference = 'Stop'
$sumFile = Join-Path $PSScriptRoot 'SHA256SUMS.txt'
if (-not (Test-Path -LiteralPath $sumFile)) { throw "SHA256SUMS.txt is missing beside this script." }
if (-not (Test-Path -LiteralPath $Zip)) { throw "Release zip not found: $Zip" }

$expected = ((Get-Content -LiteralPath $sumFile | Where-Object { $_.Trim() } | Select-Object -First 1) -split '\s+')[0].ToLowerInvariant()
$actual = (Get-FileHash -LiteralPath $Zip -Algorithm SHA256).Hash.ToLowerInvariant()

if ($actual -ne $expected) {
    Write-Host "MISMATCH" -ForegroundColor Red
    Write-Host "expected $expected"
    Write-Host "actual   $actual"
    exit 1
}

Add-Type -AssemblyName System.IO.Compression.FileSystem
$archive = [System.IO.Compression.ZipFile]::OpenRead($Zip)
try {
    $bad = @($archive.Entries | Where-Object { $_.FullName -match '\.iso$' })
    $count = $archive.Entries.Count
} finally { $archive.Dispose() }

if ($bad.Count -gt 0) {
    Write-Host "The archive contains a disc image, which should never ship." -ForegroundColor Red
    exit 1
}

Write-Host "OK  $([IO.Path]::GetFileName($Zip))  $count entries  sha256 $actual" -ForegroundColor Green
