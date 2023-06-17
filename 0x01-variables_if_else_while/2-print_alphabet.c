#include <stdio.h>
/**
 * main - print alphanbet in lower case
 * Return: 0 if successful
 */
int main(void)
{
	int i;
	for(i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar(10);

	return (0);
}
