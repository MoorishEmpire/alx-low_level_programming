#ifndef DOG_H
#define DOG_H
/**
  * struct dog - Structre that take three elements.
  * @name: The name of the dog.
  * @age: The age of the dog.
  * @owner: The name of the owner of the dog.
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
