#include "main.h"

/**
  * _atoi - Convert a string to an integer.
  * @s: The string to be converted
  *
  * Return: Returns the integer converted
  */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int started = 0;

	while (*s)
	{
		if (*s == '-')
		{
			if (started)
				break;
			sign *= -1;
		}
		else if (*s == '+')
		{
			if (started)
				break;
		}
		else if (*s >= '0' && *s <= '9')
		{
			started = 1;
			result = result * 10 + (*s - '0');
		}
		else if (started)
		{
			break;
		}
		s++;
	}
	return (sign * result);
}

