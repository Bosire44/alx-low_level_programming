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
	long unsigned int i;

	for (i = strlen(str) / 2; str[i] != '\0'; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
