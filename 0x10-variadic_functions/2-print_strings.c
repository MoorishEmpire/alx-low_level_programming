#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
  * print_strings - Prints strings, followed by a new line.
  * @separator: the string to be printed between strings.
  * @n: The numbers of strings passed to the function.
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int	i;
	va_list	args;
	char	*str;

	va_start(args, n);

	i = 0;
	while (i < n)
	{
		str = va_arg(args, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	va_end(args);
	printf("\n");
}

