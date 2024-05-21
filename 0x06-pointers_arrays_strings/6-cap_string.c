#include "main.h"

/**
  * cap_string - Capitalizes all words of a string.
  * @n: The string to be changed.
  *
  * Return: A pointer to the changed string.
  */
char *cap_string(char *n)
{
	int i = 0, j;
	char separators[] = " \t\n,;.!?\"(){}";

	if (n[i] >= 'a' && n[i] <= 'z')
		n[i] -= 32;

	while (n[i] != '\0')
	{
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (n[i] == separators[j])
			{
				if (n[i + 1] >= 'a' && n[i + 1] <= 'z')
				{
					n[i + 1] -= 32;
					break;
				}
			}
		}

		i++;
	}
	return (n);
}
