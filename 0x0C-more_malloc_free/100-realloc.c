#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
  * _realloc - Reallocates a memory block using malloc and free.
  * @ptr: Pointer to the memory previously allocated
  *		with a call to malloc : malloc(old_size).
  * @old_size: Size in bytes of the allocated space of ptr.
  * @new_size: The new size, in bytes of the new memory block.
  *
  * Return: Pointer to the new allocated space or NULL if it fails.
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *realloc, *P1;
	unsigned int i;
	void *maloc;

	P1 = ptr;

	if (ptr == NULL && new_size != 0)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		maloc = malloc(new_size);
		if (maloc == NULL)
			return (NULL);
		realloc = maloc;

		for (i = 0; i < old_size; i++)
			realloc[i] = P1[i];
		return (maloc);
	}
	else if (new_size == old_size)
		return (ptr);
	else if (new_size < old_size)
	{
		maloc = malloc(new_size);
		if (maloc == NULL)
			return (NULL);
		realloc = maloc;
		for (i = 0; i < new_size; i++)
			realloc[i] = P1[i];
		return (maloc);
	}
	return (ptr);
}
