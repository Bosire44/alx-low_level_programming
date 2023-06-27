#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * puts2 - Printes every ither character of a string
 * @str: The string
 * Return: nothing
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			printf("%c", str[i]);
		}
	}
	printf("\n");
}
