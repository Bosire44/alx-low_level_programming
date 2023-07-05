#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _print_rev_recursion - Print a string in reverse
 * @s: Print string
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	unsigned long int i = strlen(s);
	
	if (i == 0)
		return;
	printf("%c\n", s[i - 1]);
	printf("Word is: %s", s);
	s[i - 1] =  '\0';
	printf("Length is %ld and word is %s", i - 1, s);
	/*_print_rev_recursion(s); */
}
