#include "lists.h"
#include <stddef.h>

/**
  * sum_dlistint - Returns the sum of all the data (n) of a dlistint_t list.
  * @head: Pointer ot the first element of list.
  *
  * Return: Sum of all the data (n) of list, or reurn 0 if list is empty.
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

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
