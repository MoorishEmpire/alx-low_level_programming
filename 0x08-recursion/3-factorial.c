#include "main.h"

/**
  * factorial - Fuctions that returns the factorial of a given number.
  * @n: The argument number.
  *
  * Return: Tha factorial calculated.
  */
int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else if (n > 1)
		return (n * factorial(n - 1));
	else
		return (-1);
}
