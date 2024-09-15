#include "main.h"

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
	if (*p1 != *p2)
		return (0);
	if (p1 > p2)
		return (1);
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

	len =  0;
	while (s[len])
		len++;
	p1 = s;
	p2 = s + len - 1;
	return (is_palindrome_helper(s, p1, p2));
}

