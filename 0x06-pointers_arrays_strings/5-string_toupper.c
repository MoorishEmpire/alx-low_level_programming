#include "main.h"

/**
  * string_toupper - Changes all lowercase letters of a string to uppercase.
  * @n: The string to be changed.
  *
  * Return: Return a pointer to a char.
  */
char *string_toupper(char *n)
{
	char *c;

	for (c = n; *c != '\0'; c++)
	{
		if (*c <= 'z' && *c >= 'a')
		{
			*c = *c - ('a' - 'A');
		}
	}
	*c = '\0';
	return (n);
}
