#include "main.h"

/**
 * _isdigit - Check if a character is a digit (0-9).
 * @c: The character to be checked.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
/* Check if c is within the ASCII range of digits (0-9) */
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
