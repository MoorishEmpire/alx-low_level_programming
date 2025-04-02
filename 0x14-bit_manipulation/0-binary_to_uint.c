#include "main.h"

/**
 * binary_to_uint - Converts a binary to an unsigned int.
 * @b: The string in binary to be converted.
 *
 * Return: the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	int	result;
	int	i;

	if (!b)
		return (0);
	result = 0;
	i = 0;
	while (b[i])
	{
		if (b[i] != 0 && b[i] != 1)
			return (0);
		result *= 2;
		result += b[i] - '0';
		i++;
	}
	return (result);
}
