#include <stdio.h>

/*
 * Exercise 1-5. Modify the temperature conversion program to print the table
 * in reverse order, that is, from 300 degrees to 0.
 */
int main() {
    for(int fahrenheit = 300; fahrenheit >= 0; fahrenheit = fahrenheit - 20) {
        printf("%5d | %6.1f\n", fahrenheit, (5.0/9.0) * (fahrenheit - 32));
    }
}