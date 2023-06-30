#include <stdio.h>
#include "main.h"
/**
 * rev_string - Prints a string in reverse
 * @s: The string
 * Return: nothing
 */
void rev_string(char *s)
{
        char s2[1000];
	int i, j;

        for (i = 0; s[i] != '\0'; i++)
	{
		s2[i] = s[i];
	}
	for (j = i; j > 0; j--)
	{
		s[j - 1] = s2[i - j];
	}
	s[i + 1] = '\0';
}
