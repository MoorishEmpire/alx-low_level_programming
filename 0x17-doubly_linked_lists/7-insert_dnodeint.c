#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * insert_dnodeint_at_index - Inserts a new node at a given position.
  * @h: Pointer to pointer to the first element of list.
  * @idx: The index of the list where the new node should be added.
  * @n: The data to be added.
  *
  * Return: The address of the new node, or NULL if it failed.
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *b, *temp;
	unsigned int index;

	if (h == NULL)
		return (NULL);

	b = malloc(sizeof(dlistint_t));

	if (b == NULL)
		return (NULL);

	b->next = b->prev = NULL;
	b->n = n;

	if (idx == 0)
		add_dnodeint(h, n);
	else
	{
		index = idx - 1;
		temp = *h;
		while (temp != NULL && index > 0)
		{
			index--;
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
		if (temp->next == NULL)
			add_dnodeint_end(h, n);
		else
		{
			b->next = temp->next;
			b->prev = temp->next->prev;
			temp->next = b;
			temp->next->prev = b;
		}
	}
	return (*h);
}
