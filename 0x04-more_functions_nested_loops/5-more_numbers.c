#include <stdio.h>
#include "main.h"
/**
 * *more_numbers - prints to 14
 * Return: 0 if successful
 */
void more_numbers(void)
{
	int i, j, count = 0, start = 48, end = 58;

	for (i = 0; i < 10; i++)
	{
		count = 0;
		for (j = start; j < end; j++)
		{
			if (j >= 58)
			{
				j = 48;
				end = 53;
				printf("Just got here");
			}
			if (count > 10)
				_putchar(49);
			_putchar(j);
			count++;
		}
		_putchar(10);
	
	}
}
