#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
  * str_concat - Concatenates two strings.
  * @s1: The first string.
  * @s2: The seconde string.
  * Return: Pointer to newly allocated space in memory which contains
  * the contents of s1, followed by the contents of s2, and null terminated,
  * or Return NULL on failure.
  */
char *str_concat(char *s1, char *s2)
{
	char *concat, *temp;
	int len1 = 0, len2 = 0;

	if (s1 != NULL)
	{
	while (s1[len1] != '\0')
		len1++;
	}
	if (s2 != NULL)
	{
	while (s2[len2] != '\0')
		len2++;
	}

	concat = (char *)malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat == NULL)
		return (NULL);

	temp = concat;

	if (s1 != NULL)
	{
		while (*s1 != '\0')
			*temp++ = *s1++;
	}
	if (s2 != NULL)
	{
		while (*s2 != '\0')
			*temp++ = *s2++;
	}
	*temp = '\0';

	return (concat);
}
