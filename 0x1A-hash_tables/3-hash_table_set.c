#include "hash_tables.h"

/**
 * hash_table_set -  adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key; it cannot be an empty string
 * @value: the value associated with the key
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node; /*Node to store the key-value pair*/
	char *value_copy;
	unsigned long int index, i;
	/*Check for invalid inputs*/
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	
	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
       	i = index;
	while (ht->array[i])
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value); /*Free the existing value*/
			ht->array[i]->value = value_copy;
			return (1);
		}
		i++;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(value_copy);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	
	new_node->value = value_copy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
