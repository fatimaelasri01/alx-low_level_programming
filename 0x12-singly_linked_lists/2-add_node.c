#include "lists.h"
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to pointer to the head of list.
 * @str: the string needs to be duplicated.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	if (!str)
		return (NULL);

	tmp = malloc(sizeof(list_t));
	if (!tmp)
		return (NULL);

	tmp->str = strdup(str);
	if (tmp->str == NULL)
		return (free(tmp), NULL);

	tmp->len = strlen(str);
	tmp->next = *head;
	*head = tmp;

	return (tmp);
}
