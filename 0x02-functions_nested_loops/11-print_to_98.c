#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_to_98 - Print from n to 98
 * @n: - start point
 * Return: 0 if successful
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i < 99; i++)
	{
		if (i != 98)
		{
			printf("%d, ", i);
		}
		else
			printf("%d", 98);
	}
	printf("\n");
}
