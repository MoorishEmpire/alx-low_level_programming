#include "main.h"
#include <limits.h>
#include <stdlib.h>

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to find the last digit of
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n == INT_MIN)
	{
		last_digit = 8;
	}
	else
	{
	    n = abs(n);
	    last_digit = n % 10;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}

