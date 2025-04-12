#include "main.h"

/**
 * get_endianness - Fuctions that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int	get_endianness(void)
{
	uint32_t	x = 0xa1b2c3d4;
	uint8_t		*c = (uint8_t *)&x;

	if (*c == 0xd4)
		return (1);
	else
		return (0);
}
