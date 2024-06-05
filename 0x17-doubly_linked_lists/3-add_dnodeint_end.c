#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
  * @head: Pointer to pointer to the first element of dlistint_t list.
  * @n: Constant data to be added.
  *
  * Return: Pointer to the first element of list.
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *b, *temp;

	if (head == NULL)
		return (NULL);

	b = malloc(sizeof(dlistint_t));

	if (b == NULL)
		return (NULL);

	b->next = NULL;
	b->prev = NULL;
	b->n = n;

	temp = *head;

	if (*head == NULL)
		*head = b;
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		b->prev = temp;
		temp->next = b;
	}
	return (*head);
}
