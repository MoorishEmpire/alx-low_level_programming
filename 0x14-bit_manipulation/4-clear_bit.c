#include "main.h"

/**
 * clear_bit - Sets te value of a bit to 0 at a given index.
 * @n: The unsigned long int.
 * @index: The index of the bit we want to set.
 *
 * Retutn: 1 on success or -1 if an error occurred.
 */

int	clear_bit(unsigned long int *n, unsigned int index)
{

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
