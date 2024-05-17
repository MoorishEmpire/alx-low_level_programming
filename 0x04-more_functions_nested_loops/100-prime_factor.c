#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number
 * @n: The number to find the largest prime factor of
 *
 * Return: The largest prime factor of n
 */
long largest_prime_factor(long n)
{
	long largest_prime;
	int i;

	while (n % 2 == 0)
	{
		largest_prime = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			largest_prime = i;
			n /= i;
		}
	}

	if (n > 2)
		largest_prime = n;

	return (largest_prime);
}

/**
  * main - Prints the largest prime factor of the number returned by the
  *				function largest_prime_factor
  * Return: Always 0 (Success)
  */
int main(void)
{
	long number;
	long largest_prime;

	number = 612852475143;
	largest_prime = largest_prime_factor(number);

	printf("%ld\n", largest_prime);

	return (0);
}
