#include <stdio.h>
#include <stdlib.h>
/**
 * main - writes sum of multiples of 3 and 9
 * Return: - the number
 */
int main(void)
{
	int i,  sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += 1;
		}
	}
	printf("%d\n", sum);
	return (0);
}
