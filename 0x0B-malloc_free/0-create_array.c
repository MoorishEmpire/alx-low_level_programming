#include <stddef.h>
#include <stdlib.h>

/**
  * create_array - Creates an array of chars,
  *			and initializes it with a specific char.
  * @size: The size of the array.
  * @c: The char to be initialized with.
  *
  * Return: POinter to array or Null if it fails.
  */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
