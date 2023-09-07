#!/bin/bash

# Step 1: Set the environment variable CFILE
export CFILE=0-main.c

# Step 2: Compile and run the specified C source file
gcc -o myprogram $CFILE
./myprogram

# Clean up the executable file (optional)
#rm myprogram

