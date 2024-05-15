#include "main.h"
<<<<<<< HEAD
=======
#include <limits.h>
>>>>>>> 7ea658607b8dbcc24cc3adcb9bf39dcc3d711d92
#include <stdlib.h>

/**
	* print_last_digit - Prints the last digit of a number
	* @n: The number to find the last digit of
	*
	* Return: The value of the last digit
 */

int print_last_digit(int n)
{
<<<<<<< HEAD
	n = abs(n);
	n = n % 10;
	_putchar(n + '0');

	return (n);
=======
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
>>>>>>> 7ea658607b8dbcc24cc3adcb9bf39dcc3d711d92
}

