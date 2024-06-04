#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
  * free_listint - Frees a listint_t list.
  * @head: The first element of listint_t list.
  */
void free_listint(listint_t *head)
{
	listint_t *temp;


	while (head != NULL)
	{
		temp = head;
		head = temp->next;
		free(temp);
	}
}
