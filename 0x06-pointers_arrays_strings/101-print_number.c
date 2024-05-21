#include "main.h"
#include <limits.h>

/**
  * print_number - Prints an integer.
  * @n: The integer to be printed.
  */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		if (n == INT_MIN)
		{
			unsigned int num = (unsigned int) (-1 * (n + 1)) + 1;

			if (num / 10)
				print_number(num / 10);
			_putchar((num % 10) + '0');

			return;
		}
		else
		{
			n = -n;
		}
	}

	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}
