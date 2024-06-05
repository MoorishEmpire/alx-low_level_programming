#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * delete_dnodeint_at_index - Deletes a new node at a given position.
 * @head: Pointer to pointer to the first element of the list.
 * @index: The index of the list where the new node should be added.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int idx;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		if (temp->next != NULL)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}
	for (idx = 0; temp != NULL && idx < index ; idx++)
		temp = temp->next;

	if (temp == NULL)
		return (-1);

	if (temp->next == NULL)
	{
		temp->prev->next = NULL;
		free(temp);
		return (1);
	}

	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
