
# C - More malloc, free

## Description
This project focuses on dynamic memory allocation in C using malloc, free, and exit.

## Learning Objectives
- Understand dynamic memory allocation.
- Learn how to use malloc and free.
- Handle memory allocation failures.
- Understand how exit() terminates a program.
- Prevent memory leaks.

## Requirements
- Ubuntu 20.04 LTS
- GCC compiler
- Betty coding style
- No global variables

## Files

### 0-malloc_checked.c
Allocates memory using malloc.

- Returns a pointer to the allocated memory.
- Terminates the program with exit status 98 if malloc fails.

### main.h
Contains the function prototypes.

## Compilation

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c 0-malloc_checked.c

