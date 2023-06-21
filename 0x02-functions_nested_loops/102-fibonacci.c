#include <stdio.h>
#include <stdlib.h>
/**
 * main- print fibonacci
 * Return: 0 if successful
 */
int main(void)
{
    int fib[50];
    fib[0] = 1;  // First Fibonacci number
    fib[1] = 2;  // Second Fibonacci number

    // Generate Fibonacci numbers
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // Print the Fibonacci numbers separated by comma and space
    for (int i = 0; i < n; i++) {
        printf("%d", fib[i]);
        if (i != n - 1) {
            printf(", ");
        }
    }
    printf("\n");
}
