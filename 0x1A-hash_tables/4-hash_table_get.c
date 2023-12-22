#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht:  the hash table you want to look into
 * @key: the string key to search for
 *
 * Return: the value associated with the key, or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;
	/*Check for invalid inputs: NULL hash table, NULL key, or empty key*/
	if (!ht || !key || !*key)
		return (NULL);
	/*Calculate the index for the given key using a hashing function*/
	index = key_index((const unsigned char *)key, ht->size);
	/*Traverse the linked list at the calculated index to find the key*/
	node = ht->array[index];
	while (node)
	{
		/* If the key is found, return the associated value*/
		if (!strcmp(node->key, key))
			return (node->value);
		node = node->next; /*Move to the next node in case of collision*/
	}

	return (NULL);
}

