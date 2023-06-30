#include <stdio.h>
#include "main.h"
/**
 * print_rev - Prints a string in reverse
 * @s: The string
 * Return: nothing
 */
void print_rev(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		continue;
	for (j = i - 1; j >= 0; j--)
		printf("%c", s[j]);
	printf("\n");
}
