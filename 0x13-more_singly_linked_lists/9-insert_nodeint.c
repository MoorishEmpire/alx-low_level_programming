#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * insert_nodeint_at_index - Inserts a new node at a given position.
  * @head: Pointer to the first element of the listint_t list.
  * @idx: Index of the list where the new node should be added.
  * @n: The data to be added.
  *
  * Return: Returns a pointer to the listint_t list.
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *b, *temp;
	unsigned int index;

	if (*head == NULL || head == NULL)
		return (NULL);

	b = malloc(sizeof(listint_t));

	if (b == NULL)
		return (NULL);

	b->n = n;
	b->next = NULL;

	index = idx - 1;

	temp = *head;
	while (index > 0 && temp != NULL)
	{
		temp = temp->next;
		index--;
	}
	if (index == 0)
	{
		b->next = temp->next;
		temp->next = b;
		return (*head);
	}
	else
		return (NULL);
}
