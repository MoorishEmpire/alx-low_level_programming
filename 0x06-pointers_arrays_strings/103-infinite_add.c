#include "main.h"
#include <string.h>

/**
  * digit_count - Counts the lenght of the two number and return the greatest.
  * @n1: the first number.
  * @n2: the second number.
  *
  * Return: The greatest len of the two numbers.
  */

int	digit_count(char *n1, char *n2)
{
	int	len1 = strlen(n1);
	int	len2 = strlen(n2);

	return	(len1 > len2 ? (len1) : (len2));
}

/**
 * infinite_add - Adds two numbers stored as strings.
 * @n1: The first number (string).
 * @n2: The second number (string).
 * @r: The buffer to store the result (string).
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result if it fits in the buffer, otherwise 0.
 */

char	*infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int	len1;
	int	len2;
	int	carry;
	int	sum;
	int	i;
	int	j;
	int	k;

	len1 = strlen(n1);
	len2 = strlen(n2);
	carry = 0;
	sum = 0;
	i = len1 - 1;
	j = len2 - 1;
	k = 0;
	if (size_r <= digit_count(n1, n2) + 1)
		return (0);

	r[size_r - 1] = '\0';

	for (k = size_r - 2; k >= 0; k--)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i--] - '0';
		if (j >= 0)
			sum += n2[j--] - '0';
		if (sum == 0 && i < 0 && j < 0 && carry == 0)
			break;

		carry = sum / 10;

		r[k] = (sum % 10) + '0';
	}
	if (carry > 0)
	{
		r[k--] = carry + '0';
	}

	return (r + k + 1);
}
