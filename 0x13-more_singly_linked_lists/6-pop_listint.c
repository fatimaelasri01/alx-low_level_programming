#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 *              and returns the head node’s data (n).
 * @head: a pointer to a pointer to the head of the linked list.
 *
 * Return: the head node's data (n), or 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);

	tmp = *head;
	n = tmp->n;
	*head = tmp->next;
	free(tmp);

	return (n);
}

