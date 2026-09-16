#include <stdio.h>

/*
 * Exercise 1-3. Modify the temperature conversion program to print a heading above the table.
 *
 * Print Fahrenheit to Celsius conversion table
 * for fahr = 0, 20, ..., 300; floating point conversion
 */

int main() {
    float fahr,celsius;
    int lower, upper, step;

    lower = 0;    /* lower limit of temperature table */
    upper = 300;  /* upper limit */
    step = 20;    /* step size */

    fahr = lower;
    printf("Fahrenheit | Celsius\n");
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%10.0f | %7.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}