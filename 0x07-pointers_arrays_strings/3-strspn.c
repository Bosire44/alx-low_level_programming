#include <stdio.h>
#include "main.h"
/**
 * _strspn - Get the length of a prefix substring
 * @s: The string
 * @accept: The substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, sum = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				if (accept[j + 1] == s[i + 1])
				{
					continue;
				}
				else
				{
					sum += 1;
					break;
				}
			}
			
		}
		if (accept[j] == '\0')
		{
			return (sum);
		}
	}
	return (sum);
}
