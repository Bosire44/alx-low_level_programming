#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * swap_int - swaps the values of two inetgers
 * @a: first integre
 * @b: second integer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int d = *b;
	*b = *a;
	*a = d;
}
