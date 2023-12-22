#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 *
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;/* creates a new hash table */

	/* Checks if the size is zero, returning NULL if so */
	if (!size)
		return (NULL);

	/* Allocates memory for the hash table structure */
	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
		return (NULL);

	/* Sets the size of the hash table */
	hash_table->size = size;

	/* Allocates memory for an array of hash nodes */
	hash_table->array = malloc(size * sizeof(hash_node_t *));
	if (!hash_table->array)
	{
		/* Frees previously allocated memory if allocation fails */
		free(hash_table);
		return (NULL);
	}

	/* Returns a pointer to the newly created hash table */
	return (hash_table);
}
