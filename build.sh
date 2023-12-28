#!/bin/bash

mkdir -p bin
mkdir -p lib
mkdir -p build
cd build


cmake -DCMAKE_INSTALL_PREFIX="../bin" ../src 
cmake --build .

cd ../
