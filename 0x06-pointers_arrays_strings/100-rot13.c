#include "main.h"

/**
  * *rot13 - Encodes a string using rot13.
  * @str: The string to be encoded.
  *
  * Return: A pointer to the resulting string.
  */
char *rot13(char *str)
{
	int i, j;
	char chars[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char replac[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; chars[j] != '\0'; j++)
		{
			if (str[i] == chars[j])
			{
				str[i] = replac[j];
				break;
			}
		}
	}
	return (str);
}
