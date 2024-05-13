#include <stdio.h>

/**
  * print_to_98 - Prints all natural numbers from n to 98
  * @n: Integer wich the parameter of the function
  */
void print_to_98(int n)
{
	int count;
	int tmp;
	count = 0;
	do {
		if(count < 1)
		{
			printf("%d", n);
			count++;
			tmp = n;
		}

		if (tmp == n && n != 98)
		{
			printf(",");
			printf(" ");
		}
		if (n < 98)
			printf("%d", ++n);
		else if (n > 98)
			printf("%d",--n);
		if (n != 98)
		{
			printf(",");
			printf(" ");
		}
	} while (n != 98);
	printf("\n");
}

