#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - -print every minute
 * Return: 0 if sucessful
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i < 13; i++)
	{
		for (j = 0; j < 14; j++)
		{
			for (k = 0; k < 6; k++)
			{
				for (l = 0; l < 10; l++)
				{
					if (!(((i % 10) > 2) && ((j % 10) > 3)))
					{
						_putchar(48 + (i % 10));
						_putchar(48 + (j % 10));
						_putchar(':');
						_putchar(48 + k);
						_putchar(48 + l);
						_putchar(10);
					}
				}
			}
		}

	}
}

