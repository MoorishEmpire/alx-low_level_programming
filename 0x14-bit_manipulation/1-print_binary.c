#include "main.h"

/**
 * print_binary - Prints the binary representation of number.
 * @n: The number to be printed in binary.
 */
void	print_binary(unsigned long int n)
{
	int	leading;
	int	i;

	leading = 0;
	i = (sizeof(unsigned long int) * 8) - 1;
	while (i >= 0)
	{
		if ((n & (1UL << i)) != 0)
			leading = 1;
		if (leading)
			_putchar((n & (1UL << i)) ? '1' : '0');
		i--;
	}
	if (!leading)
		_putchar('0');
}
