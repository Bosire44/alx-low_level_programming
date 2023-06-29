#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strcmp - concatenates two strings
 * @s1: destination string
 * @s2: Source string
 * Return: Pointer to the resulting string
 */
int _strcmp(char *s1, char *s2)
{
        int difference = 0, max, i, ascii_s1, ascii_s2;
	unsigned long int j, k;

	j = strlen(s1);
	k = strlen(s2);
	
	if (j < k)
		max = k;
	else
		max = j;

	for (i = 0; i < max; i++)
	{
		ascii_s1 = s1[i];
		ascii_s2 = s2[i];

		if (ascii_s1 < ascii_s2)
		{
			difference -= 1;
		}
		else if (ascii_s1 > ascii_s2)
		{
			difference += 1;
		}
	}
	return (difference);
}
		


