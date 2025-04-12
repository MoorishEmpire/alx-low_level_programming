#include "main.h"

/**
 * get_endianness - Fuctions that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int	get_endianness(void)
{
	int		i;
	uint32_t	x = 0xa1b2c3d4;
	uint8_t		*c = (uint8_t *)&x;

	i = sizeof(unsigned long int) * 8 - 1;
	while (i >= 4)
	{
		if ((x & (1UL << i)) != (*c & (1UL << i)))
			return (1);
		i--;
	}
	return (0);
}
