#include "main.h"
#include "math.h"

/**
	* times_table - Prins the 9 time table
 */
void times_table(void)
{
	int i;
	int j;
	int times;
	int count;

	for (i = 0; i < 10; i++)
	{
		count = 0;
		for (j = 0; j < 10; j++)
		{
			count++;
			times = i * j;
			if (times < 10)
			{
				_putchar(times + '0');
			}
			else
			{
				_putchar((times / 10) + '0');
				_putchar((times % 10) + '0');
			}
			if (count < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

