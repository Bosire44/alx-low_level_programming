#include <stdio.h>
/**
 * main - Print sizeof data type in diff machines 
 * Return: return 0 if successful
 */
int main(void)
{
	char a = 'c';
	int b = 4;
	long int c = 234;
	long long int d = 45;
	float e = 3.14;

	printf("Size of a char: %d byte(s)\n", sizeof(a));
	printf("Size of an int: %d byte(s)\n", sizeof(b));
	printf("Size of a long int: %d byte(s)\n", sizeof(c));
	printf("Size of a long long int: %d byte(s)\n", sizeof(d));
	printf("Size of a float: %d byte(s)\n", sizeof(e));

	return (0);
}
