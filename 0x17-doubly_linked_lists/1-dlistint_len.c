#include "lists.h"

/**
 * dlistint_len - finds the number of elements in a dlistint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
