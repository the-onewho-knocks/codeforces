$folder = Get-Location

Write-Host "Compiling..." -ForegroundColor Cyan

g++ "$folder\main.cpp" -o "$folder\main.exe"

if ($LASTEXITCODE -ne 0) {
    Write-Host "COMPILATION FAILED" -ForegroundColor Red
    exit
}

# Use CMD redirection for reliable stdin/stdout streaming in C++
cmd /c "$folder\main.exe < `"$folder\input.txt`" > `"$folder\output.txt`""

# Safely read expected and actual output without crashing on empty files
$expectedRaw = Get-Content "$folder\expected.txt" -Raw
$actualRaw   = Get-Content "$folder\output.txt" -Raw

$expected = if ($null -ne $expectedRaw) { $expectedRaw.Trim() } else { "" }
$actual   = if ($null -ne $actualRaw)   { $actualRaw.Trim() }   else { "" }

if ($expected -eq $actual) {
    Write-Host ""
    Write-Host "PASSED" -ForegroundColor Green
}
else {
    Write-Host ""
    Write-Host "FAILED" -ForegroundColor Red

    Write-Host ""
    Write-Host "Expected:"
    Write-Host $expected

    Write-Host ""
    Write-Host "Got:"
    Write-Host $actual
}