#include <stdio.h>
/**
 * main - Printa ll possible digits
 * Return: 0 if sucess
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == 57)
			putchar(57);
		else
		{
			putchar(i);
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
