#include <stdio.h>
#include "main.h"
/**
 * _strchr - Locates a character in a string
 * @s: Search string
 * @c: Search character
 * Return: A pointe to the first occurence of character c ins string s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			break;
	}
	if (s[i] == '\0')
		return (NULL);
	return ((s + i));
}
