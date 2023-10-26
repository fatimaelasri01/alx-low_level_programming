#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: a pointer to a pointer to the head of the linked  list.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *next;

	if (head == NULL)
		return;
	tmp = *head;

	while (tmp)
	{
		next = tmp->next;
		tmp = next;
		free(tmp);
	}

	*head = NULL;
}
