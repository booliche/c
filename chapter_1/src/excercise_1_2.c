#include <stdio.h>

/*
 * Exercise 1-2. Experiment to find out what happens when printf's argument
 * string contains \c, where c is some character not listed above.
 */
int main() {
    // \c is not a standard C escape sequence. Compilers will issue a warning
    // about an unknown escape sequence, and strict compilation flags may cause it to fail.
    printf("Hello, World!\c");
}