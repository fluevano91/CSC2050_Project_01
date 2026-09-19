#!/bin/bash

if [ $# -ne 3 ]; then
    echo "Error: exactly three arguments are required."
    exit 1
fi

program=$1
argument=$2
expected=$3

if [ ! -f "$program" ]; then
    echo "Error: program file does not exist."
    exit 1
fi

actual=$("$program" "$argument")

if [ "$actual" = "$expected" ]; then
    echo "PASS"
else
    echo "FAIL"
    echo "Expected: $expected"
    echo "Got: $actual"
fi
