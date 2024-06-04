#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
  * delete_nodeint_at_index - Deletes the node at index of a listint_t list.
  * @head: Pointer to the pointer of the first element of the listint_t.
  * @index: The index of the node that should be deleted.
  *
  * Return: 1 if it succeeded, -1 if it failed.
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *idxtemp;
	unsigned int indx;

	if (head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		temp = NULL;
		return (1);
	}

	indx = index - 1;
	temp = *head;
	while (indx > 0 && temp->next != NULL)
	{
		temp = temp->next;
		indx--;
	}
	if (temp->next == NULL)
		return (-1);

	idxtemp = temp->next;
	temp->next = (temp->next)->next;
	free(idxtemp);
	idxtemp = NULL;

	return (1);
}
