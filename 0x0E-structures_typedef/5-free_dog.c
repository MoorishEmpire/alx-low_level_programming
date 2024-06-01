#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - Frees dogs of type dog_t.
  * @d: Pointer to dogs of type dog_t.
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
