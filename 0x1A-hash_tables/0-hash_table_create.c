#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: is the size of the array
 *
 * Return: a pointer to the newly created hash table, 0 on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int i;

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
	{
		return (NULL);
	}

	hash_table->array = malloc(size * sizeof(hash_node_t *));

	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		hash_table->array[i] = NULL;
	}

	hash_table->size = size;
	return (hash_table);
}
