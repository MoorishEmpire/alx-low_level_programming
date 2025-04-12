#include "main.h"

/**
 * flip_bits - Fuction that returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: First number to flip from.
 * @m: Second number to flip to.
 * Return: The number of bits you would need to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int	i;
	int	count;

	i = sizeof(unsigned long int) * 8 - 1;
	count = 0;
	while (i >= 0)
	{
		if ((n & (1UL << i)) != (m & (1UL << i)))
			count++;
		i--;
	}
	return (count);
}
