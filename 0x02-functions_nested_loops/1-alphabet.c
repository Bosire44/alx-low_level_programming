#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - print alphabet
 * Return: 0 if successful
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
