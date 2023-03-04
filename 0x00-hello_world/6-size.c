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

	printf("size of char: %zu", sizeof(a));
	printf("\nsize of int: %u", sizeof(b));
	printf("\nsize of a long int: %zu", sizeof(c));
	printf("\nsize of a long long int: %zu", sizeof(d));
	printf("\nsize of a float: %zu", sizeof(f));
	return (0);
}
