#!/bin/bash
set -e
gcc -c *.c || exit 1
ar -rcs liball.a *.a || exit 1
ranlib liball.a || exit 1
