#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all - Returns the sum of a variable number of integers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of integers to calculate the sum of.
 *
 * Return: The sum of all integers passed to the function.
 */
	int sum_them_all(const unsigned int n, ...)
	{
		va_list ap;
		unsigned int i, sum = 0;


		va_start(ap, n);


		for (i = 0; i < n; i++)
			sum += va_arg(ap, int);


		va_end(ap);


		return (sum);
	}

