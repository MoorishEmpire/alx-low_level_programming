#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
  * print_dlistint - Prints all the elements of a dlistint_t list.
  * @h: Pointer to the first element of the list dlistint_t.
  *
  * Return: The number of nodes.
  */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	unsigned int len = 0;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		len++;
		temp = temp->next;
	}
	return (len);
}
