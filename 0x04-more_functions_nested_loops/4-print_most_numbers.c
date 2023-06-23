#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - prints to 9 omitting 2 qnd 4
 * Return: Printed numbvers
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 50 && i != 52)
			_putchar(i);
	}
	_putchar(10);
}
