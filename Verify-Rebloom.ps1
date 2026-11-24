param(
    [string]$Sums = (Join-Path $PSScriptRoot 'SHA256SUMS.txt')
)

$ErrorActionPreference = 'Stop'
Add-Type -AssemblyName System.IO.Compression.FileSystem

if (-not (Test-Path -LiteralPath $Sums)) { throw "SHA256SUMS.txt is missing beside this script." }
$entries = @(Get-Content -LiteralPath $Sums | Where-Object { $_.Trim() -and -not $_.TrimStart().StartsWith('#') })
if ($entries.Count -eq 0) { throw "No checksums in $Sums" }

$verified = 0
$missing = 0
foreach ($line in $entries) {
    $parts = $line.Trim() -split '\s+', 2
    if ($parts.Count -ne 2) { throw "Cannot read this checksum line: $line" }
    $expected = $parts[0].ToLowerInvariant()
    $name = $parts[1].Trim()
    $path = Join-Path $PSScriptRoot $name
    if (-not (Test-Path -LiteralPath $path)) {
        Write-Host "MISSING  $name" -ForegroundColor Yellow
        $missing++
        continue
    }
    $actual = (Get-FileHash -LiteralPath $path -Algorithm SHA256).Hash.ToLowerInvariant()
    if ($actual -ne $expected) {
        Write-Host "MISMATCH $name" -ForegroundColor Red
        Write-Host "  expected $expected"
        Write-Host "  actual   $actual"
        exit 1
    }
    if ($name -like '*.zip') {
        $archive = [IO.Compression.ZipFile]::OpenRead($path)
        try {
            $bad = @($archive.Entries | Where-Object { $_.FullName -match '\.iso$' })
        } finally { $archive.Dispose() }
        if ($bad.Count -gt 0) {
            Write-Host "The archive $name contains a disc image, which should never ship." -ForegroundColor Red
            exit 1
        }
    }
    Write-Host "OK  $name  $actual" -ForegroundColor Green
    $verified++
}

if ($verified -eq 0) { throw "None of the listed files are here." }
if ($missing -gt 0) { Write-Host "$missing file(s) not downloaded here; checked the rest." -ForegroundColor Yellow }
