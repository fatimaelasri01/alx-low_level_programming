#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list.
 * @head: a pointer to the head of list.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		head = tmp;
		free(head->str);
		free(head);
	}
}
