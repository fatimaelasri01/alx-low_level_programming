#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint -adds a new node at the beginning of a listint_t list.
 * @head: a pointer to a pointer to the head of the linked list.
 * @n: the value to be added to the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ad_node;

	if (head == NULL)
		return (NULL);

	ad_node = malloc(sizeof(listint_t));
	if (ad_node == NULL)
		return (NULL);

	ad_node->n = n;
	ad_node->next = *head;
	*head = ad_node;

	return (ad_node);
}

