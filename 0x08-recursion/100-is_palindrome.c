#include "main.h"

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
	int	is_palindrome;

	is_palindrome = 1;
	len =  0;
	while (s[len])
		len++;
	p1 = s;
	p2 = s + len - 1;
	while (p1 < p2)
	{
		if (*p1 != *p2)
		{
			is_palindrome = 0;
			break;
		}
		p1++;
		p2--;
	}
	if (is_palindrome)
		return (1);
	return (0);
}

