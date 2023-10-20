#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns the number of elements in a linked list_t list.
 *  @h: a pointer to start of list.
 *
 *  Return: the number of elements in list.
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}

	return (counter);
}
