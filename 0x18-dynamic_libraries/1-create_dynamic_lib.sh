#!/bin/bash
gcc *.c -c -fPIC
gcc *.o -shared -oliball.so
export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
