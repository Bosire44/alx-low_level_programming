#include <stdio.h>
#include "main.h"
/**
 * _memset - Fills memory with constant byte
 * @s: memory to be filled
 * @b: constant byte to fill the memory
 * @n: number of bytes to be filled
 * Return: A pointr to the memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
