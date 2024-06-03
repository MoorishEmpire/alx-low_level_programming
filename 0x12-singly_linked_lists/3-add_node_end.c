#include "lists.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

/**
  * add_node_end - Adds a new node at the end of a list_t.
  * @head: Pointer of type struct list_t at the first element of list.
  * @str: Pointer to the string to be added.
  *
  * Return: The address of the new element, or NULL if it failed..
  */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *b, *temp;

	while (str[len] != '\0')
		len++;

	b = (list_t *)malloc(sizeof(list_t));
	if (b == NULL)
		return (NULL);

	b->str = strdup(str);
	b->len = len;
	b->next = NULL;

	temp = *head;
	if (*head == NULL)
		*head = b;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = b;
	}
	return (*head);
}

