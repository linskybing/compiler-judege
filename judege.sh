#!/bin/bash

TEST_DIR="./testcases"
GOLDEN_SCANNER="golden_scanner"
#GOLDEN_SCANNER="./scanner"
SCANNER="./scanner"

pass_count=0
fail_count=0

for i in $(seq -f "%02g" 0 5); do
    test_file="${TEST_DIR}/t${i}.c"   
    golden_output=$($GOLDEN_SCANNER < "$test_file")
    scanner_output=$($SCANNER < "$test_file")
    
    diff_output=$(diff <(echo "$golden_output") <(echo "$scanner_output"))
    
    if [ -z "$diff_output" ]; then
        echo -e "t${i}.c\t\033[32m PASSED\033[0m"
        pass_count=$((pass_count + 1))
    else
        echo -e "t${i}.c\t\033[31mFAILED\033[0m"
        fail_count=$((fail_count + 1))
    fi
done

echo -e "\n\033[32mPassed: $pass_count\033[0m"
echo -e "\033[31mFailed: $fail_count\033[0m"
