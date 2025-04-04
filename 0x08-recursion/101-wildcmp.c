#include "main.h"

/**
  * wildcmp - Function that compares two stirng.
  * @s1: The first to be compared.
  * @s2: The seconde to be compared.
  *
  * Return: 1 if the strings can be considered identical, 0 otherwise.
  */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0' || wildcmp(s1, s2 + 1))
			return (1);

		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
			return (1);
	}

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
