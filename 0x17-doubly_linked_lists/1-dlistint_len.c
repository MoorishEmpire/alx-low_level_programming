#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
  * dlistint_len - Returns the number of elements in a linked dlistint_t list.
  * @h: Pointer to the first element of dlistint_t list.
  *
  * Return: Number of elements in the list.
  */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	unsigned int len = 0;

	temp = h;
	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}
