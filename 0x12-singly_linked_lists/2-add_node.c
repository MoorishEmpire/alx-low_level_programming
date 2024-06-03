#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
  * add_node - Adds a nex node at the beginning of a list_t list.
  * @head: The first element of the list.
  * @str: The string to be added.
  *
  * Return: The address of the new element, or NULL if it failed.
  */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *b;

	while(str[len] != '\0')
		len++;

	b = (list_t *)malloc(sizeof(list_t));
	if (b == NULL)
		return (NULL);
	b->str = strdup(str);
	b->len = len;
	b->next = NULL;

	if (*head != NULL)
		b->next = *head;
	*head = b;

	return (*head);
}
