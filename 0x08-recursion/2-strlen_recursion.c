#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strlen_recursion - Return length osf a string
 * @s: TThe string
 * Return: String length;
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return i;
	i++;
	i = i + _strlen_recursion(s + i);
	return (i);
}


