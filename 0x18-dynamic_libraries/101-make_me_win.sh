#!/bin/bash
wget https://github.com/thomasmontoya123/holbertonschool-low_level_programming/raw/master/0x18-dynamic_libraries/first_inject.so -P ../
export LD_PRELOAD=../first_inject.so