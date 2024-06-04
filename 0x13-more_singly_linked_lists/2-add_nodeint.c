#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
  * add_nodeint - Adds a new node at the beginning of a listint_t list.
  * @head: The first element of list listint_t.
  * @n: The data to be added.
  *
  * Return: Returns a pointer to the beginning of list.
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *b;

	b = (listint_t *)malloc(sizeof(listint_t));

	if (b == NULL)
		return (NULL);

	b->n = n;
	b->next = NULL;

	if (*head != NULL)
		b->next = *head;
	*head = b;

	return (*head);
}
