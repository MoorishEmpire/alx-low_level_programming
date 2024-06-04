#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * sum_listint - Retunrs the sum of all the data of a listint_h linked list.
  * @head: Pointer to the first element of this list.
  *
  * Return: Sum of all data (n) of this list.
  */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
		return (0);

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
