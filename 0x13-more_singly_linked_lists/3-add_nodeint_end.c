#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
  * add_nodeint_end - Adds a new node at the end of a listint_t list.
  * @head: Pointre of type listint_t to he first elelment of list.
  * @n: The data to be added
  *
  * Return: Pointer to the first element of listint_t.
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *b, *temp;

	b = (listint_t *)malloc(sizeof(listint_t));
	if (b == NULL)
		return (NULL);
	b->n = n;
	b->next = NULL;

	if (*head == NULL)
		*head = b;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = b;
	}
	return (*head);
}
