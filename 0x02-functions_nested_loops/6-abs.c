#include <stdio.h>
#include "main.h"
/**
 * _abs - print absolute value of a nuber
 * @c - Number to be printed
 * Return: Absolute value
 */
int _abs(int c)
{
	if (c > 0)
		return (c);
	else if (c < 0)
		return (c * -1);
	return (0);
}
