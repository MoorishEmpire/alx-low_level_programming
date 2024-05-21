#include "main.h"

/**
  * _strncat - Concatenates two strings using at most n bytes from src.
  * @dest: The destination string.
  * @src: The source string.
  * @n: the maximum number of bytes to be used from src.
  *
  * Return: Returns a pointer to a char of the resulting string dest.
  */
char *_strncat(char *dest, char *src, int n)
{
	int length1, i;
	char *dest_src;

	dest_src = dest;
	length1 = 0;
	while (dest[length1] != '\0')
		length1++;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[length1 + i] = src[i];
	}
	dest[length1 + i] = '\0';

	return (dest_src);
}
