#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long fib1 = 1, fib2 = 2, fib_sum;
	unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;
	unsigned long half1, half2;

	printf("%lu, %lu", fib1, fib2);

	for (i = 3; i <= 92; ++i)
	{
		fib_sum = fib1 + fib2;
		printf(", %lu", fib_sum);
		fib1 = fib2;
		fib2 = fib_sum;
	}
	fib1_half1 = fib1 / 1000000000;
	fib1_half2 = fib1 % 1000000000;
	fib2_half1 = fib2 / 1000000000;
	fib2_half2 = fib2 % 1000000000;
	for (; i <= 98; i++)
	{
		half1 = fib1_half1 + fib2_half1;
		half2 = fib1_half2 + fib2_half2;
		if (half2 > 1000000000)
		{
			half1 += 1;
			half2 %= 1000000000;
		}
		printf(", %lu%09lu", half1, half2);
		fib1_half1 = fib2_half1;
		fib1_half2 = fib2_half2;
		fib2_half1 = half1;
		fib2_half2 = half2;
	}
	printf("\n");
	return (0);
}
