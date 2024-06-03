#include "lists.h"

/**
  * list_len - Returns the number of elements in a linked list_t list.
  * @h: Constant pointer to the type of struct list_t.
  * Description: Takes a list as paramater and returnes the numbers of elements
  * Return: The number of elements of the list.
  */
size_t  list_len(const list_t *h)
{
	size_t len = 0;
	const list_t *temp;

	temp = h;

	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}
