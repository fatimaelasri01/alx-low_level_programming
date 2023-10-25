#include "lists.h"

/**
 * listint_len - returns the number of elements in a listint_t list.
 * @h: pointer to the head of the linked list.
 *
 * Return: the number of elements in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}

	return (counter);
}

