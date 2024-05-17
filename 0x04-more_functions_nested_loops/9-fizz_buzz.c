#include <stdio.h>

/**
  * main - Prints the numbers from 1 to 100, but for multipleof three print Fizz
  * istead of the number and for the multiple of five print Buzz. For numbers
  * which are multiples of both three and five print Fizz Buzz.
  * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("Fizz");
			printf(" ");
			printf("Buzz");
		}
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}
	return (0);
}
