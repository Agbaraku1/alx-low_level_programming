#include <stdio.h>
/**
 * main - print out sizes of data types in c
 * code by bwave ict
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %zu", sizeof(a));
	printf("\nSize of an int: %u", sizeof(b));
	printf("\nSize of a long int: %zu", sizeof(c));
	printf("\nSize of a long long int: %zu", sizeof(d));
	printf("\nSize of a float: %zu", sizeof(f));
	return (0);
}
