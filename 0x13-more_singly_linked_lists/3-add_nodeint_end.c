#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: a pointer to a pointer to the head of the linked list.
 * @n: the value to be add to the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *tmp;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	tmp->next = node;

	return (node);
}

