param(
  [Parameter(Mandatory = $true)][string]$Project,
  [string]$Executable
)

$ErrorActionPreference = "Stop"

$File = "CMakeLists.txt"
if (-not (Test-Path -LiteralPath $File)) {
  Write-Error "CMakeLists.txt not found."
  exit 3
}

$content = Get-Content -LiteralPath $File -Raw

$projCount = [regex]::Matches($content, '(?im)set\(\s*PROJECT_NAME_VAR').Count
if ($projCount -ne 1) {
  Write-Error "Expected exactly 1 PROJECT_NAME_VAR line, found $projCount."
  exit 6
}

$execCount = [regex]::Matches($content, '(?im)set\(\s*EXECUTABLE_NAME_VAR').Count
if ($execCount -ne 1) {
  Write-Error "Expected exactly 1 EXECUTABLE_NAME_VAR line, found $execCount."
  exit 6
}

if (-not $Executable) {
  $Executable = $Project
}

$content = [regex]::Replace(
  $content,
  '(?ims)set\(\s*PROJECT_NAME_VAR.*?\)',
  "set(PROJECT_NAME_VAR `"$Project`")"
)

$content = [regex]::Replace(
  $content,
  '(?ims)set\(\s*EXECUTABLE_NAME_VAR.*?\)',
  "set(EXECUTABLE_NAME_VAR `"$Executable`")"
)

[System.IO.File]::WriteAllText($File, $content, (New-Object System.Text.UTF8Encoding($false)))

Write-Host "Project name set to: $Project"
Write-Host "Executable name set to: $Executable"
