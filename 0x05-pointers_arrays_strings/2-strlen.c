#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strlen - returns len of string
 * @s: string
 * Return: Length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		continue;
	return (i);
}
