#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
  * _calloc - Allocates memory for an array, using malloc.
  * @nmemb: Number of elements of the array.
  * @size: The size in bytes for each element.
  *
  * Return: Pointer to the allocated memory, or NUll if it fails.
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *temp;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	temp = ptr;

	for (i = 0; i < (nmemb * size); i++)
		temp[i] = 0;

	return (ptr);
}
