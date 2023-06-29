#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: Source string
 * Return: Pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	unsigned long int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
