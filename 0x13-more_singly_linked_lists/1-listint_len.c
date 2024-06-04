#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
  * listint_len - Returns the number of elements in linked listint_t list.
  * @h: Constant pointer of type listint_t.
  *
  * Return: Return the number of nodes in h list.
  */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;
	const listint_t *temp;

	if (h != NULL)
	{
		temp = h;
		while (temp != NULL)
		{
			len++;
			temp = temp->next;
		}
	}
	return (len);
}
