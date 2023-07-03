#include <stdio.h>
#include "main.h"
/**
 * _memcpy - Copy n bytes from memory area src to emmory ares dest
 *@dest: Destination memory
 *@src: Source memory
 *@n: no of bytes to copy
 *Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = src[i];
	}
	return (dest);
}
