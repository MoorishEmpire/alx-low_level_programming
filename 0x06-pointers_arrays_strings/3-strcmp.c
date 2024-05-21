#include "main.h"

/**
  * _strcmp - Compares two strings.
  * @s1: First argument to be compared.
  * @s2: Seconde argument to be compared to s1.
  *
  * Return: Returns an integer greather or equal or less than zero,
  * if s1 is respectively greather or match or less than s2.
  */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return ((unsigned char)*s1 - (unsigned char)*s2);
}
