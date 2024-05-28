# 42-libft

## Description
The **42-libft** project is a foundational assignment in the 42 curriculum that involves creating a custom C library. This library includes a variety of general-purpose functions that are commonly used in other projects. The goal is to implement standard C library functions as well as additional utilities, helping students to solidify their understanding of C programming.

## Repository Structure
The repository contains the following key files and directories:

- **Makefile**: Script to compile the library.
- **libft.h**: Header file with function prototypes and macros.
- **src/**: Directory containing the source files for each function.
- **test/**: Directory with test files to verify the functionality of the library.

## Functions Implemented
Some of the functions implemented in this project include:

- **Memory management**: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
- **String manipulation**: `ft_strlen`, `ft_strdup`, `ft_strcpy`, `ft_strncpy`, `ft_strcat`, `ft_strncat`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strstr`, `ft_strnstr`, `ft_strcmp`, `ft_strncmp`
- **Character checks and conversions**: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
- **Linked lists**: Functions to manipulate linked lists

## How to Use
To compile and use the library, follow these steps:

1. Clone the repository:
    ```sh
    git clone https://github.com/i4b2c/42-libft.git
    cd 42-libft
    ```

2. Compile the library using the Makefile:
    ```sh
    make
    ```

3. Include `libft.h` in your C project and link the compiled library:
    ```c
    #include "libft.h"
    ```

4. Compile your project with the `libft.a` library:
    ```sh
    gcc -o my_program my_program.c -L. -lft
    ```

## Testing
You can run the provided tests to ensure all functions are working correctly:

1. Navigate to the `test` directory:
    ```sh
    cd test
    ```

2. Compile and run the test suite:
    ```sh
    make
    ./run_tests
    ```
This README provides a comprehensive overview of the project, including descriptions, usage instructions, and contact information. Adjust as necessary to reflect specific details of your project.
