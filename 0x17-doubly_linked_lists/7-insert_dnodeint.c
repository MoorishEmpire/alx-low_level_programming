#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to pointer to the first element of the list.
 * @idx: The index of the list where the new node should be added.
 * @n: The data to be added.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int index;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = new_node->prev = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;
	for (index = 0; temp != NULL && index < idx - 1; index++)
		temp = temp->next;

	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (temp->next == NULL && index == idx - 1)
		return (add_dnodeint_end(h, n));

	if (index == idx - 1)
	{
		new_node->next = temp->next;
		new_node->prev = temp;
		if (temp->next != NULL)
			temp->next->prev = new_node;
		temp->next = new_node;
		return (new_node);
	}

	free(new_node);
	return (NULL);
}

