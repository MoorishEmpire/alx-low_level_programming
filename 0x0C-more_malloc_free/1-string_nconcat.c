#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
  * string_nconcat - Function that concatenates two strings.
  * @s1: The first string to be concatenated.
  * @s2: The second string to be concatenated.
  * @n: The number of bytes of s2 to be concatenated with s1.
  *
  * Return: Pointer to a char of the result of concatenation or NULL if fails.
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *temp;
	unsigned int len1 = 0, len2 = 0;
	unsigned int i = 0, j = 0;

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
	if (n > len2)
		n = len2;

	temp = malloc(len1 + n + 1);

	if (s1 != NULL)
	{
		while (s1[i] != '\0')
		{
			temp[i] = s1[i];
			i++;
		}
	}
	if (s2 != NULL && n)
	{
		while (j < n)
		{
			temp[i + j] = s2[j];
			j++;
		}
	}
	temp[i + j] = '\0';

	return (temp);
}
