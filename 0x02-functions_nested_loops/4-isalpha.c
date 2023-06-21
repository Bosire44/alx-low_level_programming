#include <stdio.h>
#include "main.h"
/**
 * _isalpha - Checks if a character is alpha
 * @c: Charcater to be checked
 * Return: 1 if c is a letter and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	else
		return (0);
}
