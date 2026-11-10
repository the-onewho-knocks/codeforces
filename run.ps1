$folder      = (Get-Location).Path
$timeLimitMs = 1000
$memLimitMB  = 256

Write-Host "Compiling..." -ForegroundColor Cyan
g++ -O2 -std=c++17 -Wall -Wextra "$folder\main.cpp" -o "$folder\main.exe"
if ($LASTEXITCODE -ne 0) { Write-Host "COMPILATION FAILED" -ForegroundColor Red; exit }

function Normalize($s) {
    if ($null -eq $s) { return "" }
    return (($s.Trim() -split '\s+') -join ' ')
}

function ExitReason($code) {
    switch ($code) {
        -1073741819 { return "segfault / access violation" }
        -1073740791 { return "stack buffer overrun" }
        -1073741571 { return "stack overflow" }
        -1073741676 { return "division by zero" }
        -1073740940 { return "heap corruption" }
        default     { return "exit code $code" }
    }
}

# Run the program with input.txt
$psi = New-Object System.Diagnostics.ProcessStartInfo
$psi.FileName               = "$folder\main.exe"
$psi.RedirectStandardInput  = $true
$psi.RedirectStandardOutput = $true
$psi.RedirectStandardError  = $true
$psi.UseShellExecute        = $false
$psi.CreateNoWindow         = $true

$p = New-Object System.Diagnostics.Process
$p.StartInfo = $psi

$sw = [System.Diagnostics.Stopwatch]::StartNew()
[void]$p.Start()

# read output async so big output can't deadlock the pipe
$outTask = $p.StandardOutput.ReadToEndAsync()
$errTask = $p.StandardError.ReadToEndAsync()

try {
    $p.StandardInput.Write([IO.File]::ReadAllText("$folder\input.txt"))
    $p.StandardInput.Close()
} catch { }   # program may exit before reading all input

# poll: track peak memory and enforce the time limit
$peakBytes = 0
$killed    = $false
while (-not $p.HasExited) {
    try { $p.Refresh(); if ($p.PeakWorkingSet64 -gt $peakBytes) { $peakBytes = $p.PeakWorkingSet64 } } catch { }
    if ($sw.ElapsedMilliseconds -gt $timeLimitMs) {
        $killed = $true
        try { $p.Kill() } catch { }
        break
    }
    Start-Sleep -Milliseconds 5
}
$p.WaitForExit()
$sw.Stop()

$timeMs   = [math]::Round($sw.Elapsed.TotalMilliseconds, 1)
$memMB    = [math]::Round($peakBytes / 1MB, 1)
$actRaw   = $outTask.Result
$exitCode = if ($killed) { 0 } else { $p.ExitCode }
Set-Content "$folder\output.txt" $actRaw -NoNewline

$expRaw   = Get-Content "$folder\expected.txt" -Raw
$expected = Normalize $expRaw
$actual   = Normalize $actRaw

if     ($killed)                { $verdict = "TLE (killed)";                $color = "Red" }
elseif ($exitCode -ne 0)        { $verdict = "RE: $(ExitReason $exitCode)"; $color = "Red" }
elseif ($memMB -gt $memLimitMB) { $verdict = "MLE";                         $color = "Red" }
elseif ($expected -ne $actual)  { $verdict = "WA";                          $color = "Red" }
else                            { $verdict = "OK";                          $color = "Green" }

Write-Host ""
if ($verdict -eq "OK") {
    Write-Host "PASSED" -ForegroundColor Green
    Write-Host "hellll yeahhhhh" -ForegroundColor Magenta
} else {
    Write-Host "FAILED bruh: $verdict" -ForegroundColor Red
    Write-Host "try again bruh" -ForegroundColor Gray
}
Write-Host "Time: $timeMs ms (limit: $timeLimitMs ms) | Memory: $memMB MB (limit: $memLimitMB MB)" -ForegroundColor $color

if ($verdict -eq "WA") {
    $e = @(($expRaw -split "`r?`n")); $a = @(($actRaw -split "`r?`n"))
    for ($i = 0; $i -lt [math]::Max($e.Count, $a.Count); $i++) {
        if ((Normalize $e[$i]) -ne (Normalize $a[$i])) {
            Write-Host ""
            Write-Host "First diff at line $($i+1):" -ForegroundColor Gray
            Write-Host "  expected: $($e[$i])"
            Write-Host "  got     : $($a[$i])"
            break
        }
    }
}
if ($verdict -like "RE*") {
    $err = $errTask.Result
    if ($err) { Write-Host "stderr: $($err.Trim())" -ForegroundColor Gray }
}
# $folder = Get-Location

# Write-Host "Compiling..." -ForegroundColor Cyan

# g++ "$folder\main.cpp" -o "$folder\main.exe"

# if ($LASTEXITCODE -ne 0) {
#     Write-Host "COMPILATION FAILED" -ForegroundColor Red
#     exit
# }

# # Use CMD redirection for reliable stdin/stdout streaming in C++
# cmd /c "$folder\main.exe < `"$folder\input.txt`" > `"$folder\output.txt`""

# # Safely read expected and actual output without crashing on empty files
# $expectedRaw = Get-Content "$folder\expected.txt" -Raw
# $actualRaw   = Get-Content "$folder\output.txt" -Raw

# $expected = if ($null -ne $expectedRaw) { $expectedRaw.Trim() } else { "" }
# $actual   = if ($null -ne $actualRaw)   { $actualRaw.Trim() }   else { "" }

# if ($expected -eq $actual) {
#     Write-Host ""
#     Write-Host "PASSED" -ForegroundColor Green
#     Write-Host "hellll yeahhhhh" -ForegroundColor Magenta
# }
# else {
#     Write-Host ""
#     Write-Host "FAILED bruh" -ForegroundColor Red
#     Write-Host "try again bruh" -ForegroundColor gray
#     Write-Host ""
#     Write-Host "Expected:"
#     Write-Host $expected

#     Write-Host ""
#     Write-Host "Got:"
#     Write-Host $actual
# }