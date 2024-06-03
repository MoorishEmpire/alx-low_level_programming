#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
  * print_list - Prints all the lements of a list_t list.
  * @h: Pointer to the list to be printed.
  *
  * Return: Returnes the number of nodes.
  */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}
	return (nodes);
}
