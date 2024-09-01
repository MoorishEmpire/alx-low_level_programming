#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number of the times table to print.
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i;
	int j;
	int product;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			product = i * j;

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (product < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (product < 100)
				{
					_putchar(' ');
					_putchar((product / 10) + '0');
				}
				else
				{
					_putchar((product / 100) + '0');
					_putchar(((product / 10) % 10) + '0');
				}
			}
			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}

