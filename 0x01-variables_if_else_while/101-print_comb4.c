#include <stdio.h>
/**
 * main - print some numbes
 * Return: 0 if successful
 */
int main(void)
{
	int i, j, k, m = 49, n = 50;
	
	for (i = 48; i < 56; i++)
	{
		for (j = m; j < 57; j++)
		{
			for (k = n; k < 58; k++)
			{
				if (!(i == j && j == k))
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (!(i == 55 && j == 56 && k == 57))
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
		n += 1;
		m += 1;
	}
	putchar(10);
	return (0);
}
