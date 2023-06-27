#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _puts - Write a string to stdout
 * @str: String to be printed
 * Return: nothing
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
