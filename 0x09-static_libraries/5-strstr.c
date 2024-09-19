#include <stddef.h>

/**
  * _strstr - Locates a substring.
  * @haystack: The string to be scanned.
  * @needle: The substring to look for the occurrence.
  *
  * Return: Pointer to the beginning of the located substring, or NULL if the
  *					substring is not found.
  */
char	*_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	if (*needle == '\0')
		return (haystack);
	j = 0;
	while (haystack[j])
	{
		i = 0;
		if (haystack[j] == needle[i])
		{
			while (haystack[j + i] == needle[i] && needle[i])
				i++;
			if (needle[i] == '\0')
				return (haystack + j);
		}

		j++;
	}
	return (NULL);
}

