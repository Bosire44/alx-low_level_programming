#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * rev_string- reverses a string
 * @s: String
 * Return: nothing
 */
void rev_string(char *s)
{
	long unsigned int i, j;
	
	char s2[] = *s;

	for (i = strlen(s), j = 0; i >= 0, j < strlen(s); i--, j++)
	{
		s[j] = s2[i];
	}
}
