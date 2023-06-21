#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - Prints the last digit of anumber
 * @c: Number whose last digit is o be printed
 * Return: Value of last digit
 */
int print_last_digit(int c)
{
	if ((c % 10) < 0)
	{
		_putchar(48 + (-1 * (c % 10)));
		return (-1 * (c % 10));
	}
	_putchar(48 + (c % 10));
	return (c % 10);
}
