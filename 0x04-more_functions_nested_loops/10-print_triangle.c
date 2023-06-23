#include <stdio.h>
#include "main.h"
/**
 * print_triangle - print triangle
 * @size: Size of triangle
 * Return: IDK
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size < 1)
	{
		_putchar(10);
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < size - i; j++)
		{
			_putchar(' ');
		}
		for (k = 0; k < i; k++)
		{
			_putchar('#');
		}
		_putchar(10);
	}
}
