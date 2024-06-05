#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
  * @head: Pointer to the first element of the list.
  * @index: The index of the node, starting from 0.
  *
  * Return: Pointer to the node with same index in list, or NULL if it fails.
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);

	if (index == 0)
		return (head);

	temp = head;
	while (index > 0 && temp != NULL)
	{
		index--;
		temp = temp->next;
	}
	if (temp != NULL)
		return (temp);
	else
		return (NULL);
}
