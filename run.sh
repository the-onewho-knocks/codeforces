#!/bin/bash

folder="$(pwd)"

echo -e "\033[36mCompiling...\033[0m"

g++ "$folder/main.cpp" -o "$folder/main"

if [ $? -ne 0 ]; then
    echo -e "\033[31mCOMPILATION FAILED\033[0m"
    exit 1
fi

# Run program with input.txt and save output to output.txt
"$folder/main" < "$folder/input.txt" > "$folder/output.txt"

# Safely read expected and actual output
expected=$(cat "$folder/expected.txt" 2>/dev/null | xargs)
actual=$(cat "$folder/output.txt" 2>/dev/null | xargs)

if [ "$expected" = "$actual" ]; then
    echo ""
    echo -e "\033[32mPASSED\033[0m"
else
    echo ""
    echo -e "\033[31mFAILED\033[0m"

    echo ""
    echo "Expected:"
    echo "$expected"

    echo ""
    echo "Got:"
    echo "$actual"
fi