#include "main.h"
#include <stdlib.h>

char	*_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	j = 0;
	while (haystack[j])
	{
		i = 0;
		if (haystack[j] == needle[i])
		{
			while (haystack[j + i] == needle[i] && needle[i])
			{
					i++;
			}
			if (needle[i] == '\0')
				return (haystack + j);
		}

		j++;
	}
	return (NULL);
}
