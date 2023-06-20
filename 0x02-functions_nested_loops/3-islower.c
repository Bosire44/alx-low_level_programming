#include <stdio.h>
#include "main.h"
/**
 * _islower - check if is lower
 * Return: 1 if c is lowercase 0 therwise
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
		return (0);
}
