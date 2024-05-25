#include "main.h"

/**
  * _memset - Fills memory with a constant byte.
  * @s: The string to be filled.
  * @b: The char that the string will be filled with.
  * @n: The number of bytes of the string to be filled.
  *
  * Return: The string result.
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *str;

	str = s;
	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (str);
}

