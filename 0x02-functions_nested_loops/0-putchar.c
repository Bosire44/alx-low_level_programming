#include <stdio.h>
#include "main.h"
/**
 * main - print_putchar
 * Return: 0 if successful
 */
int main(void)
{
	char name[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(name[i]);
	_putchar('\n');
	return (0);
}
