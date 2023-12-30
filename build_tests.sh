#!/bin/bash

source build.sh

mkdir -p build_test
cd build_test


cmake ../src_test 
cmake --build .

cd ../

