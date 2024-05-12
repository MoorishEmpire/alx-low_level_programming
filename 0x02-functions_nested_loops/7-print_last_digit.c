#include "main.h"
#include <stdlib.h>

/**
	* print_last_digit - Prints the last digit of a number
	* @n: The number to find the last digit of
	*
	* Return: The value of the last digit
 */

int print_last_digit(int n)
{
	n = abs(n);
	n = n % 10;
	_putchar(n + '0');

	return (n);
}

