#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
  * malloc_checked - Allocates memory using malloc.
  * @b: The size to be allocated.
  *
  * Return: Pointer to the allocate memory but if malloc fails,
  *	the malloc_checked function should cause normal process termination
  *			with a status of 98.
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

