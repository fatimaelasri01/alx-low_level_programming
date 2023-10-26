#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: a pointer to the head of the linked list.
 * @index: the index of the node, starting at 0.
 *
 * Return: the nth node,if the node does not exist, return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		if (counter == index)
			return (tmp);

		tmp = tmp->next;
		counter++;
	}

	return (NULL);
}

