#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - Search a string for any set of bytes
 * @s: Searched string
 * @accept: Search string
 * Return: A pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (s + j - 1);
			}
		}
	}
	return (NULL);
}
