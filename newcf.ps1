param(
    [Parameter(Mandatory=$true)]
    [string]$FolderName
)

# Create folder
New-Item -ItemType Directory -Path $FolderName -Force | Out-Null

# File paths
$mainFile = Join-Path $FolderName "main.cpp"
$inputFile = Join-Path $FolderName "input.txt"
$outputFile = Join-Path $FolderName "output.txt"
$expectedFile = Join-Path $FolderName "expected.txt"

# C++ boilerplate
$cppCode = @"
#include <bits/stdc++.h>
using namespace std;

void solve(){

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve()

    return 0;
}
"@

# Create main.cpp
Set-Content -Path $mainFile -Value $cppCode

# Create empty input.txt
Set-Content -Path $inputFile -Value ""

# Create empty output.txt
Set-Content -Path $outputFile -Value ""

# Create empty expected.txt
Set-Content -Path $expectedFile -Value ""

Write-Host ""
Write-Host "Created: $FolderName" -ForegroundColor Green
Write-Host ""
Write-Host "Files:"
Write-Host "  main.cpp"
Write-Host "  input.txt"
Write-Host "  output.txt"
Write-Host "  expected.txt"
Write-Host ""