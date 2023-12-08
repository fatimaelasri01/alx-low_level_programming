#include "lists.h"

/**
 * get_dnodeint_at_index - returns node at given index
 * @head: pointer to the head of the list
 * @index: the index of the node, starting from 0
 *
 * Return: the address of node at index, NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
