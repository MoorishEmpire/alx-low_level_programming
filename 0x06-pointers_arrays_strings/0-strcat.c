#include "main.h"

/**
  * _strcat - Concatenates two strings.
  * @dest: first pointer to a char argument
  * @src: Seconde pointer to a char argument
  *
  * Return: Returns a pointer to a char
  */
char *_strcat(char *dest, char *src)
{
	int length1, i;

	length1 = 0;
	while (dest[length1] != '\0')
		length1++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[length1 + i] = src[i];
	}
	dest[length1 + i] = '\0';

	return (dest);
}
