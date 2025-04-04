#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: Number of parameters
 *
 * Return: Sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	va_list args;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(args, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
