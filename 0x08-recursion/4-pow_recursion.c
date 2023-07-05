#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - raise x to y
 * @x: Number
 * @y: power
 * Return: Result
 */
int _pow_recursion(int x, int y)
{
	int result = 1;

	if (y < 0)
		return (-1);
	if (y == 1)
		return (x);
	if (y == 0)
		return (1);
	result = x * _pow_recursion(x, y - 1);
	return (result);
}
