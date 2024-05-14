#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int fib1 = 1, fib2 = 2, fib_sum;

	printf("%lu, %lu", fib1, fib2);

	for (i = 3; i <= 50; ++i)
	{
		fib_sum = fib1 + fib2;
		if (fib_sum < 4000000)
		{
			printf(", %lu", fib_sum);
			fib1 = fib2;
			fib2 = fib_sum;
		}
		else
			break;
	}

	printf("\n");

	return (0);
}

