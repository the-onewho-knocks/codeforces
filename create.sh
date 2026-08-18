#!/bin/bash

# Check argument
if [ -z "$1" ]; then
    echo "Usage: ./create.sh <FolderName>"
    exit 1
fi

FolderName="$1"

# Create folder
mkdir -p "$FolderName"

# File paths
mainFile="$FolderName/main.cpp"
inputFile="$FolderName/input.txt"
outputFile="$FolderName/output.txt"
expectedFile="$FolderName/expected.txt"

# C++ boilerplate
cat > "$mainFile" << 'EOF'
#include <bits/stdc++.h>
using namespace std;

void solve(){

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
EOF

# Create empty files
touch "$inputFile"
touch "$outputFile"
touch "$expectedFile"

echo ""
echo -e "\033[32mCreated: $FolderName\033[0m"
echo ""
echo "Files:"
echo "  main.cpp"
echo "  input.txt"
echo "  output.txt"
echo "  expected.txt"
echo ""