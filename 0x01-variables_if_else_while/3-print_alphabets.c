#include <stdio.h>
/**
 * main - prints alphabet in lower case then upper case
 * Return: 0 if successful
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	for (i = 65; i < 91; i++)
	{
		putchar(i);
	}
	putchar(10);

	return (0);
}
