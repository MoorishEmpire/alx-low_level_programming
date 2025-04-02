#include "main.h"

/**
 * binary_to_usint - Converts a binary to an unsigned int.
 * @b: The string in binary to be converted.
 *
 * Return: the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	while (b[i])
	{
		result *= 2;
		result += b[i] - '0';
		i++;
	}
	return (result);
}
