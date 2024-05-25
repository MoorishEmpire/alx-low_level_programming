#include "main.h"

/**
  * _strchr - Locates a character in a string.
  * @s: The string to be checked.
  * @c: The character to look for in the string.
  *
  * Return: Pointer to the first occurrence of the character c in the string s,
  *				or NUll if the character is not found.
  */
char *_strchr(char *s, char c)
{
	int count;
	
	count = 0;
	while (*s++ != '\0')
	{
		if (*s == c)
		{
			break;
		}
		count++;
	}
	return (s);
}
