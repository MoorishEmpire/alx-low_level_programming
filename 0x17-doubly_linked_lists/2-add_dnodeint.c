#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
  * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
  * @head: Pointer to pointer to the first element of dlistint_t.
  * @n: The data to be added.
  *
  * Return: Pointer to the first element of the list dlistint_t.
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *b, *temp;

	if (head == NULL)
		return (NULL);

	b = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (b == NULL)
		return (NULL);

	b->next = NULL;
	b->prev = NULL;
	b->n = n;

	temp = *head;
	if (*head != NULL)
	{
		b->next = temp;
		temp->prev = b;
	}
	*head = b;

	return (*head);
}
