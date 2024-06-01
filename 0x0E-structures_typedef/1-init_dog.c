#include "dog.h"

/**
  * init_dog - Initialize a variable of type struct dog.
  * @d: The variable of type struct dog.
  * @name: The dog name of the stuct dog.
  * @age: The dog age of the struct dog.
  * @owner: The owner name of the struct dog.
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
