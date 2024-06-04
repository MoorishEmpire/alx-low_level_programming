#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
  * free_listint2 - Frees a listint_t list.
  * @head: The first element of listint_t list.
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
	*head = NULL;
}
