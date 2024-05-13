#include <stdio.h>

/**
  * print_to_98 - Prints all natural numbers from n to 98
  * @n: Integer wich the parameter of the function
  */
void print_to_98(int n)
{
	do {
		printf("%d", n);

		if (n != 98)
		{
			printf(",");
			printf(" ");
		}
		if (n < 98)
			n++;
		else
			n--;
	} while (n != 98);
	printf("98 \n");
}

