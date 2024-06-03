#ifndef LIST_H
#define LIST_H

#include <stddef.h>
/**
  * struct lis_t - Structure named list_t.
  * @str: string - (malloc'ed string.
  * @len: Length of the string.
  * @next: Pointer of type sturct list_t to the next element of the list.
  *
  * Description: singly linked list node structure.
  */
typedef struct list_t
{
	char *str;
	unsigned int len;
	struct list_t *next;
} list_t;

size_t print_list(const list_t *h);
#endif
