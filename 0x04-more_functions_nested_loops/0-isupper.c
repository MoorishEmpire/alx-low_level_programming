#include "main.h"

/**
 * _isupper - Check if a character is uppercase
 * @c: The character to be checked
 *
 * Return: 1 if the character is uppercase, 0 otherwise
 */
int _isupper(int c)
{
/* Check if c is within the ASCII rang of uppercase letters (A-Z) 
 */
if (c >= 'A' && c <= 'Z')
return (1);
else 
return (0);
}
