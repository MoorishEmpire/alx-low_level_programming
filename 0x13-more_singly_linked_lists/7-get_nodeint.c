#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
  * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
  * @head: Pointer to the first element of listint_h.
  * @index: The index of the element node the be returned.
  *
  * Return: Returnes the data n of the node withe the index entered.
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;

	temp = head;

	while (index > 0)
	{
		temp = temp->next;
		index--;
	}
	return (temp);
}
