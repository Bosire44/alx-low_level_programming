#include <stdio.h>
#include <stdlib.h>
/**
 * main - find largest prime factor
 * Return: Print sth
 */
int main(void)
{
	long num = 612852475143L, factor, i;

	for (i = 1; i <= num / 2; i++)
	{
		if (num % i == 0)
		{
			factor = i;
		}
	}
	printf("%ld\n", factor);
	return (0);
}
