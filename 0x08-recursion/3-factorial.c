#include "main.h"

/**
  * factorial - Fuctions that returns the factorial of a given number.
  * @n: The argument number.
  *
  * Return: Tha factorial calculated.
  */
int	factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n < 2)
		return (1);
	return (n * factorial(n - 1));
}

