#include "main.h"

/**
  * is_palindrome - Functions that checks for palindromes.
  * @s: The string to a char to be checked.
  *
  * Return: 1 if the string is a palindrome and 0 if not.
  */
int is_palindrome(char *s)
{
	int length = 0;
	int i = 0;

	while (s[length] != '\0')
		length++;
	return (is_palindrome_helper(s, length, i));
}

/**
  * is_palindrome_helper - Helper function to check if string is palindrome.
  * @s: the string to be checked.
  * @length: The length of the string.
  * @i: integer play roll of counter.
  *
  * Return: 1 if s is palindrome, 0 otherwise.
  */

int is_palindrome_helper(char *s, int length, int i)
{
	if (i == length / 2)
		return (1);
	if (*(s + i) == *(s + length - 1 - i))
		return (is_palindrome_helper(s, length, i + 1));
	else
		return (0);
}
