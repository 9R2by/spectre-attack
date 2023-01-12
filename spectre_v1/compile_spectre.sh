#!/bin/bash

#compile spectre.c to binary
gcc spectre.c -o spectre

#compile spectre.c to assembly file
gcc -S spectre.c -fverbose-asm
