#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_array - prints array
 * @a: the array
 * @n: number of n arrays to print
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", *(a + i));
	}
	printf("\n");
}
