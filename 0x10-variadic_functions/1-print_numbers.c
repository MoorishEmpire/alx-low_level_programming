#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
  * print_numbers - Prints numbers, followed by a new line.
  * @separator: the string to be printed between numbers.
  * @n: The numbers of integers passed to the function.
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int	i;
	va_list	args;

	va_start(args, n);

	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(args, int));

		if (i < n - 1)
			printf("%s", separator);
		i++;
	}
	va_end(args);
	printf("\n");
}

