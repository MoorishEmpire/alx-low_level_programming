#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * new_dog - Creates a new dog.
 * @name: The dog name.
 * @age: The dog age.
 * @owner: The owner name.
 * Return: Pointer to the newly created dog_t struct or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	char *new_name, *new_owner;
	int i, len_name = 0, len_owner = 0;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[len_name])
		len_name++;
	while (owner[len_owner])
		len_owner++;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);

	new_name = malloc(len_name + 1);
	if (new_name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_owner = malloc(len_owner + 1);
	if (new_owner == NULL)
	{
		free(new_name);
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < len_name; i++)
		new_name[i] = name[i];
	new_name[i] = '\0';
	for (i = 0; i < len_owner; i++)
		new_owner[i] = owner[i];
	new_owner[i] = '\0';
	ptr->name = new_name;
	ptr->age = age;
	ptr->owner = new_owner;

	return (ptr);
}

