#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - print a sring i reverse
 * @s:P - string
 * Return: nothig
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
