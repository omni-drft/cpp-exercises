#!/bin/bash

# Compile the source code
echo "Compiling the source code..."
g++ -o executable $1
echo "Compilation complete."
echo "Running the program..."
./executable
echo "Program complete."
rm executable

