#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of list_t list.
 * @head: pointer to pointer to the head of list.
 * @str: the string needs to be duplicated.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tmp = *head;

	if (!str)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
		return (free(new), NULL);

	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}

	return (new);
}
