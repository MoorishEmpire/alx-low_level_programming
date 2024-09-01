#include "main.h"

void	_putnbr(int n)
{
	if (n >= 10)
		_putnbr(n / 10);
	_putchar(n % 10 + '0');
}

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number of the times table to print.
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, product;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				product = i * j;
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					if (product < 100)
						_putchar(' ');
					if (product < 10)
						_putchar(' ');
				}
				_putnbr(product);
			}
			_putchar('\n');
		}
	}
	else
		return ;
}
