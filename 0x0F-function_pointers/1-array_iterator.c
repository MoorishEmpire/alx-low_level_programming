#include "function_pointers.h"
#include <stddef.h>

/**
  * array_iterator - Function that executes a function given
  * as parameter on eacha element of an array.
  * @array: The array.
  * @size: The size of the array.
  * @action: A pointer of the function to be executed on each element.
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
