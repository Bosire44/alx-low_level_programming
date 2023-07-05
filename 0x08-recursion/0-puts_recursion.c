#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - prints a string followed by a new line
 * @s: Printed string
 * Retun: nothing
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		printf("\n");
		return;
	}
	printf("%c", s[0]);
	_puts_recursion((s + 1));
}
