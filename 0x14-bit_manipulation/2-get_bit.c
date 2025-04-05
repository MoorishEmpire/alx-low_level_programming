#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The unsigned long int.
 * @index: The index index of the bit you want to print.
 *
 * Return: The value of the bit at index or -1 if an error occured.
 */
int	get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n & (1UL << index)) ? 1 : 0);
}
