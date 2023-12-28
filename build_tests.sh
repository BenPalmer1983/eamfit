#!/bin/bash

source build.sh

mkdir -p build_test
cd build_test


cmake -DCMAKE_INSTALL_PREFIX="../bin" ../src_test 
cmake --build .

cd ../

