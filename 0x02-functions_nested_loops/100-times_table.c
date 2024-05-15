#include "main.h"
<<<<<<< HEAD

/**
  * print_times_table - Prints the n times table, starting with 0.
  * @n: The number of the times table to print.
  *
  * Return: void
  */
void print_times_table(int n)
{
	int i, j;
	int product;

	if (n < 0 || n > 15)
		return;
=======
/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number of the times table to print.
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n > 15 || n < 0)
		return;

>>>>>>> 7ea658607b8dbcc24cc3adcb9bf39dcc3d711d92
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			product = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
<<<<<<< HEAD
			if (product < 10)
			{
			_putchar(' ');
			_putchar(' ');
			_putchar((product % 10) + '0');
=======
			if (product < 10 && j != 0)
			{
				_putchar(' ');
				_putchar(' ');
>>>>>>> 7ea658607b8dbcc24cc3adcb9bf39dcc3d711d92
			}
			else if (product < 100)
			{
				_putchar(' ');
<<<<<<< HEAD
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else
			{
				_putchar((product / 100) + '0');
				_putchar(((product / 10) % 10) + '0');
				_putchar((product % 10) + '0');
			}
		}
	_putchar('\n');
=======
			}
			if (product >= 100)
			{
				_putchar((product / 100) + '0');
				_putchar((product / 10) % 10 + '0');
				_putchar((product % 10) + '0');
			}
			else if (product >= 10)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else
				_putchar((product % 10) + '0');
		}
		_putchar('\n');
>>>>>>> 7ea658607b8dbcc24cc3adcb9bf39dcc3d711d92
	}
}

