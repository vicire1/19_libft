# Libft

<img width="663" alt="Libft" src="https://github.com/user-attachments/assets/50c9b7a4-db9b-4d56-b5b4-9505e30bbe60">

## Description

The **Libft** project involves creating a C library that contains standard C library functions (libc) along with other utility functions. This library will serve as a foundational tool for your future C programming projects at school. It includes functions for string manipulation, memory handling, and linked list management.

## Project Objectives

- Reimplement a set of standard C library functions.
- Develop additional utility functions that are not available in libc.
- Learn dynamic memory management in C.
- Understand and utilize linked list structures.
- Create a reusable library for future projects.

## Content

- **Part 1 - Libc Functions:**
  - Implementation of functions like `ft_strlen`, `ft_memset`, `ft_strchr`, etc., which mimic the behavior of standard libc functions.

- **Part 2 - Additional Functions:**
  - Utility functions such as `ft_substr`, `ft_strjoin`, `ft_split`, which are either not available in libc or exist in a different form.

- **Bonus Part:**
  - Linked list management functions like `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, etc.

## Compilation

To compile the library, ensure that you have a Makefile with the following rules: `all`, `clean`, `fclean`, `re`, and `bonus` (if applicable).

1. **Compile the library:**

   ```bash
   make

2. **Clean object files:**

   ```bash
   make clean

3. **Remove all generated files, including the library:**

   ```bash
   make fclean

4. **Recompile everything from scratch:**

   ```bash
   make re

5. **Include bonus functions:**

   ```bash
   make bonus

## Usage

To use the library in your project, include the `libft.h` header file and compile your program with the `libft.a` library:

```c
#include "libft.h"

int main(void) {
    // Example usage
    char *str = ft_strdup("Hello, Libft!");
    ft_putstr_fd(str, 1);
    free(str);
    return (0);
}
```

To compile a program using Libft:

```bash
gcc -Wall -Wextra -Werror -L[path_to_libft.a] -lft your_program.c -o your_program
