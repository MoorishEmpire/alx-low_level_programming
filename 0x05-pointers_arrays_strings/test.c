#include <unistd.h>
#include <limits.h>

int _atoi(char *s)
{
	int i;
	int signe;
	int number;

	signe = 1;
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
		number = 0;
		if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				number *= 10;
				number += s[i] - 48;
				i++;
			}
			break;
		}
	}
	return (signe * number);
}
