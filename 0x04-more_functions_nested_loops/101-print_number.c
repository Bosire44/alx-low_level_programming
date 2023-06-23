#include <stdio.h>
#include "main.h"
/**
 * print_number - print numbers
 * @n: printed number
 * Return: th here
 */
void print_number(int n)
{	
	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}
	if (n < 10)
	{
		_putchar(48 + n);
	}
	else if ( n < 100)
	{
		_putchar(48 + (n / 10));
		_putchar(48 + (n % 10));
	}
	else if (n < 1000)
	{
		_putchar(48 + (n / 100));
		_putchar(48 + (n / 10) % 10);
		_putchar(48 + (n % 10) % 10);
	}
	else if ( n < 10000)
	{
		_putchar(48 + (n / 1000));
		_putchar(48 + (n / 100) % 10);
		_putchar(48 + (n / 10) % 10);
		_putchar(48 + (n % 100) % 10);
	}
}
