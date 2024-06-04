#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * reverse_listint - Reverses a listint_t linked list.
  * @head: Pointer to pointer to the first element of the linked list listint_t
  *
  * Return: Pointer to the first node of the reversed list.
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;

	return (*head);
}
