#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
  * array_range - Creates an array of integers.
  * @min: The min of the array.
  * @max: The max of the array.
  *
  * Return: Pointer to the newly created array, or NULL if malloc fails.
  */
int *array_range(int min, int max)
{
	int *ptr;
	int size, i;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	ptr = (int *)malloc(size * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = min + i;

	return (ptr);
}
