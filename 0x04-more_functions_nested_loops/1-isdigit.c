#include <stdio.h>
#include "main.h"
/**
 * _isdigit - Chedck for a digit
 * @c: Element to be checked
 * Return: 1 if a digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c > 47 && c < 59)
		return (1);
	return (0);
}
