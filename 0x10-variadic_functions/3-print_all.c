#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
  * print_all - Prints anything based on format specifiers.
  * @format: List of types of arguments passsed to the function.
  *
  * Return: void.
  */
void print_all(const char * const format, ...)
{
	va_list	args;
	int	i;
	char	*str;
	char	*seperator;

	va_start(args, format);
	seperator = "";
	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", seperator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", seperator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", seperator, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", seperator, str);
				break;
			default:
				i++;
				continue;
		}
		seperator = ", ";
		i++;
	}

	va_end(args);
	printf("\n");
}
