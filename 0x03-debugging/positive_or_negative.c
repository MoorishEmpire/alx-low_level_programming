#include "main.h"

/**
  * positive_or_negative - Prints the number and the sign of it.
  */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative", i);
	else
		printf("%d is zero", i);

	printf("\n");
}

