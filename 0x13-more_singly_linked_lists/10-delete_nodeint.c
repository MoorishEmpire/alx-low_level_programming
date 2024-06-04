#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at index of a listint_t list.
 * @head: Double pointer to the first element in the listint_t list.
 * @index: The index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *idxtemp;
	unsigned int indx;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	temp = *head;
	for (indx = 0; indx < index - 1 && temp->next != NULL; indx++)
	{
		temp = temp->next;
	}

	if (temp->next == NULL || indx != index - 1)
		return (-1);

	idxtemp = temp->next;
	temp->next = temp->next->next;
	free(idxtemp);

	return (1);
}
