#include "main.h"

/**
  * reverse_array - Reverses the content of an array of integers.
  * @a: The array to be reversed.
  * @n: The size of the array.
  */
void reverse_array(int *a, int n)
{
	int *p1;
	int *p2;
	int temp;

	for (p1 = a, p2 = a + n - 1; p1 < p2; p1++, p2--)
	{
		temp = *p1;
		*p1 = *p2;
		*p2 = temp;
	}
}		
