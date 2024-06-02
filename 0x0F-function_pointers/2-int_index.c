#include "function_pointers.h"

/**
  * int_index - Searches for an integer.
  * @array: The array of elements to be checked.
  * @size: The size of the array.
  * @cmp: Pointer to the function to be used to compare values.
  *
  * Return: The index of the first element for which the cmp
  * function deos not return 0, or -1 if it fails.
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
