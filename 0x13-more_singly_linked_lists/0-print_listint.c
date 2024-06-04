#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
  * print_listint - Prints all elements of a listint_t list.
  * @h: Constant pointer of type listint_t.
  *
  * Return: Return the number of nodes in h list.
  */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;
	const listint_t *temp;

	if (h != NULL)
	{
		temp = h;
		while (temp != NULL)
		{
			printf("%d\n", temp->n);
			len++;
			temp = temp->next;
		}
	}
	return (len);
}
