#include "main.h"

/**
  * is_palindrome - Functions that checks for palindromes.
  * @s: The string to a char to be checked.
  *
  * Return: 1 if the string is a palindrome and 0 if not.
  */
int is_palindrome(char *s)
{
	int i = 0;
	int length = _strlen_recursion(s);

	if (length == 0)
		return (1);
	return (is_palindrome_helper(s, i, length - 1));
}

/**
  * is_palindrome_helper - Helper function to check if string is palindrome.
  * @s: the string to be checked.
  * @start: starting index.
  * @end: ending index.
  *
  * Return: 1 if s is palindrome, 0 otherwise.
  */

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);

	return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
  * _strlen_recursion - Returns the length of a string.
  * @s: string
  *
  * Return: length of string
  */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
