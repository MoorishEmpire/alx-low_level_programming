#include "main.h"

/**
  * is_prime_number - Fuctions that checks for the prime numbers.
  * @n: The number to be checked.
  *
  * Return: Returns 1 if the input integer is a prime number, otherwise 0.
  */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);

	return (is_prime_helper(n, 2));
}

/**
  * is_prime_helper - Helper function to check if number is prime.
  * @n: The number to check.
  * @divisor: The current divisor to test.
  *
  * Return: 1 if n is prime, 0 otherwise.
  */
int is_prime_helper(int n, int divisor)
{
	if (divisor * divisor > n)
		return (1);
	if (n % divisor == 0)
		return (0);

	return (is_prime_helper(n, divisor + 1));
}
