#!/bin/bash

export TOTAL_POINTS=0
CWD=$(pwd)


for f in $CWD/*.out; do
    echo "[+] Running $(basename $f)"
    if $f; then
        FILE=$(basename $f)
        FILE=$(echo $FILE | cut -d '.' -f1)
        echo "[-] See tests/$FILE.cpp to see test case that caused failure"
        echo "[-] Exiting......"
        exit 1
    fi
done

