#include <stdio.h>
/**
 * main - print numbers fo
 * Return: 0 if sucessful
 */
int main(void)
{
	int i, j, k, l;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = 48; k < 58; k++)
			{
				for (l = 48; l < 58; l++)
				{
					if ((( i +j) < (k + l) && k >= i) || (((i + j) == (k + l)) && k > i))
					{
						putchar(i);
						putchar(j);
						putchar(32);
						putchar(k);
						putchar(l);
						if (!(i == 57 && j == 56 && k == 57 && l == 57))
						{
							putchar(44);
							putchar(32);
						}
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
