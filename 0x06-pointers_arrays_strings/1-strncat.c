#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: Source string
 * @n: Bytes from src
 * Return: Pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; j < n; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}	
