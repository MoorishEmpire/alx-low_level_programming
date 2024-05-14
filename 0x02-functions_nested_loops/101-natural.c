#include <stdio.h>

/**
  * main - Prints the sum of all multiples of 3 or 5 bellow 1024
  */
int main(void)
{
	int i, count;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			count += i;

	}
	printf("%d\n", count);
	
	return (0);
}
