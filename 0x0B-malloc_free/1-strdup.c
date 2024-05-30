#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
  * _strdup - Fuction that returns a pointer to a newly allocated
  *	space in memory, which contains a copy of the string given as parameter
  * @str: The string to be duplicated.
  * Return: Pointer to the duplicated string
  *			or Null if insufficient memory was available.
  */
char *_strdup(char *str)
{
	char *str1;
	int len = 0;
	int i;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	str1 = (char *)malloc(sizeof(char) * (len + 1));

	if (str1 == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		str1[i] = str[i];

	return (str1);
}
