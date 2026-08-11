$folder = Get-Location

Write-Host "Compiling..." -ForegroundColor Cyan

g++ "$folder\main.cpp" -o "$folder\main.exe"

if ($LASTEXITCODE -ne 0) {
    Write-Host "COMPILATION FAILED" -ForegroundColor Red
    exit
}

Get-Content "$folder\input.txt" |
    & "$folder\main.exe" |
    Out-File -Encoding utf8 "$folder\output.txt"

$expected = (Get-Content "$folder\expected.txt" -Raw).Trim()
$actual = (Get-Content "$folder\output.txt" -Raw).Trim()

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