#!/bin/bash

echo "Running Test Suite"

# Step 1 - build latest version of code

cd ../

source build_tests.sh

cd tests

python3 tests.py


