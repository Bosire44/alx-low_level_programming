#include <stdio.h>
#include "main.h"
/**
 * _isupper - Checks for uppercase character
 * @c: Number to be checked
 * Return: 1 if uppercase 0 otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	return (0);
}
