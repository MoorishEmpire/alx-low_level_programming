#include "main.h"

/**
  * _strlen - function that calculates the length of a string.
  * @s: the stirng to be checked.
  * @len: the length to be calculated.
  *
  * Return: the length of the string.
  */
int	_strlen(char *s, int len)
{
	if (s[len] == '\0')
		return (0);
	return (1 + _strlen(s, len + 1));
}

/**
  * is_palindrome_helper - Helper for the main function.
  * @s: the string to a char to be checked.
  * @p1: the pointer to the begining of the string.
  * @p2: the pointer to the end of the string.
  *
  * Return: 1 if the stirng is palindrome and 0 if not.
  */
int	is_palindrome_helper(char *s, char *p1, char *p2)
{
	if (p1 > p2)
		return (1);
	if (*p1 != *p2)
		return (0);
	return (is_palindrome_helper(s, p1 + 1, p2 - 1));
}

/**
  * is_palindrome - Functions that checks for palindromes.
  * @s: The string to a char to be checked.
  *
  * Return: 1 if the string is a palindrome and 0 if not.
  */
int	is_palindrome(char *s)
{
	char	*p1, *p2;
	int	len;

	len =  _strlen(s, 0);
	p1 = s;
	p2 = s + len - 1;
	return (is_palindrome_helper(s, p1, p2));
}

