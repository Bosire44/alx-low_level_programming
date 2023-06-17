#include <stdio.h>
/**
 * main - Print numbers
 * Return: 0 if sucessful
 */
int main(void)
{
	int i, j, k = 48;

	for (i = 48; i < 57; i++)
	{
		for (j = k; j < 58; j++)
		{
			if (i != j)
			{ 
				putchar(i);
				putchar(j);
			
				if (!(i == 56 && j== 57))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
		k += 1;
	}
	putchar(10);
	return (0);
}

