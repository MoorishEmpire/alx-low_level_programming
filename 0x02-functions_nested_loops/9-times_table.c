#include "main.h"

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int i, j, product;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			product = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (product < 10)
					_putchar(' ');
			}
			if (product >= 10)
				_putchar(product / 10 + '0');
			_putchar(product % 10 + '0');
		}
		_putchar('\n');
	}
}

