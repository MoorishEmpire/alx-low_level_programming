#include "main.h"
#include <limits.h>

/**
  * _atoi - Convert a string to an integer.
  * @s: The string to be converted
  *
  * Return: Returns the integer converted
  */
int _atoi(char *s)
{
	int i;
	int signe;
	unsigned int number;

	signe = 1;
	number = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == '+' || s[i] == '-')
		{
			if (s[i] == '-')
				signe *= -1;
			i++;
		}
		while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13)
				|| (s[i] >= 'a' && s[i] <= 'z')
				|| (s[i] >= 'A' && s[i] <= 'Z'))
			i++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				if (number > (unsigned int)INT_MAX / 10
						&& (s[i] - '0') > (INT_MAX % 10)
						&& signe == -1)
					return (INT_MIN);
				if (number > (unsigned int)INT_MAX / 10
						&& signe == 1)
					return (INT_MAX);

				number *= 10;
				number += s[i] - 48;
							i++;
			}
			break;
		}
	}
	return (signe * number);
}
