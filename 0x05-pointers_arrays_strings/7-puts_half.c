#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * puts_half - Print the second half of a string
 * @str: The string
 * Return: nothing
 */
void puts_half(char *str)
{
	unsigned long int i, b;

	if (strlen(str) % 2 == 0)
	{
		b = strlen(str) / 2;
	}
	else
	{
		b = (strlen(str) - 1) / 2;
	}
	for (i = b; str[i] != '\0'; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
