#include "main.h"
#include <string.h>

/**
 * infinite_add - Adds two numbers stored as strings.
 * @n1: The first number (string).
 * @n2: The second number (string).
 * @r: The buffer to store the result (string).
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result if it fits in the buffer, otherwise 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int carry = 0, sum, i, j, k = 0;

    if (size_r <= len1 + 1 || size_r <= len2 + 1)
        return (0);

    r[size_r - 1] = '\0';
    size_r--;

    for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--, k++)
    {
        if (k >= size_r)
            return (0);

        sum = carry;
        if (i >= 0)
            sum += n1[i] - '0';
        if (j >= 0)
            sum += n2[j] - '0';

        carry = sum / 10;
        r[size_r - 1 - k] = (sum % 10) + '0';
    }

    k++;

    if (k > size_r)
        return (0);

    memmove(r, r + size_r - k, k);

    return (r);
}

