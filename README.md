** This activity has been created as part of the 42 curriculum by : lalbatai  **

--------------------------------------------------------------------------

## Description

**Libft** is the foundational project of the 42 School curriculum. The primary goal of this activity is to **recode a selection of standard C library functions** (`libc`) along with custom utility functions and data structures. By doing so, we develop a deep understanding of memory allocation, pointer manipulation, and data management in C. 

The final output is a reliable, custom static library (`libft.a`) containing **43 compulsory functions** (including memory, string, character manipulation, and singly linked list utilities). This library acts as a personalized toolbox that will be integrated and reused across all subsequent C projects in the 42 curriculum.

---------------------------------------------------------------------------

## Instructions

### Prerequisites
To compile and use this library, you need a Unix-like environment (Linux or macOS) with the following tools installed:
*   **`cc` compiler**
*   `make` utility

### Compilation & Installation
All source files are compiled strictly using the standard 42 flags: `-Wall -Wextra -Werror`. 

Navigate to your project directory and run one of the following commands:
*   `make` or `make all` – Compiles all 43 compulsory source files and builds the static library file `libft.a`.
*   `make clean` – Deletes all temporary object files (`.o`) from the directory.
*   `make fclean` – Deletes all object files and the compiled `libft.a` static library.
*   `make re` – Triggers a clean re-compilation of the entire project (`fclean` + `all`).

### Execution & Usage
Since Libft is a static library, it does not contain a `main` function and cannot be executed directly. To use it in your future 42 projects:
1. Include the header file in your code: `#include "libft.h"`
2. Link the static library during the compilation of your future files:
   ```bash
   cc -Wall -Wextra -Werror main.c -L. -lft -I.
   ```

------------------------------------------------------------------------------

## Resources

### References
*   [GNU C Library Documentation](https://gnu.org) – Official reference for standard `libc` behaviors.
*   [C Library Reference - Tutorialspoint](https://tutorialspoint.com) – Quick reference for function signatures and parameters.
*   [Singly Linked Lists Guide](https://geeksforgeeks.org) – Conceptual overview of node allocation and linking.

### AI Usage Policy

Artificial Intelligence (AI) was utilized in the following capacity to complete this documentation and learning activity:

*   **Tasks performed:**
    *   Curating and formatting the classic learning links in the **Resources** section.
    *   Clarifying and organizing the overarching layout and structure of this `README.md` file.
    *   Explaining the foundational concepts of how to prepare a proper 42-compliant Makefile.
    *   Providing educational explanations regarding compilation commands and the behavioral logic behind specific C library functions.

*   **Parts affected:** 
    Documentation layout assistance, educational descriptions, and technical references only.

