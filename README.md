# Simple Arithmetic Program

## Overview

This project demonstrates a basic C program that performs addition and subtraction of two integers and prints the results along with the process ID. It includes a header file for function declarations and a source file for function definitions and main program logic.

## Files

- `operations.h`: Header file declaring the `add` and `subtract` functions.
- `add.c`: Contains the implementation of the `add` function and the `main` function.
- `subtract.c`: Contains the implementation of the `subtract` function.

## Functionality

1. **`operations.h`**:
    - **Function Declarations**: Declares the `add` and `subtract` functions used in `add.c` and `subtract.c`. 

2. **`add.c`**:
    - **`add` Function**: Adds two integers and returns the result.
    - **`main` Function**: Entry point of the program that calls the `add` function to compute the sum of two integers, prints the result, and displays the process ID.

3. **`subtract.c`**:
    - **`subtract` Function**: Subtracts the second integer from the first and returns the result.
    - **`main` Function**: Entry point of the program that calls the `subtract` function to compute the difference between two integers, prints the result, and displays the process ID.

## Compilation

Program was compiled using;

```sh
gcc -c add.c -o add
gcc -c subtract.c -o subtract
