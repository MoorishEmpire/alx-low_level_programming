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
void	*_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char	*new;
	unsigned int	i;
	unsigned int	size;

	if (ptr == NULL)
	{
		new = malloc(new_size);
		if (new == NULL)
			return (NULL);
		return ((void *)new);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	size = (new_size < old_size) ? new_size : old_size;

	new = malloc(new_size);
	if (new == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		new[i] = ((char *)ptr)[i];
		i++;
	}

	free(ptr);
	return ((void *)new);
}

