#include <stdio.h>
#include "main.h"
/**
 * print_sign - Print sig of a number
 * @n: Number to be checked
 * Return: 1 if is greater than zero, 0 if zero and -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (-1);
}
