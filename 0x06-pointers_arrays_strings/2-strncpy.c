#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strncpy - concatenates two strings
 * @dest: destination string
 * @src: Source string
 * @n: Bytes from src
 * Return: Pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			break;
	}
	for ( j = i; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
