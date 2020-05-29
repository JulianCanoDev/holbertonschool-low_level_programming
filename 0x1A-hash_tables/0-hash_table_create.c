#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: unsigned long int
 * Return: Created table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned int i = 0;

	ht = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (ht == NULL)
	{
		return (NULL);
	}

	ht->array = (hash_node_t **) malloc(sizeof(hash_node_t *) * size);

	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}

	ht->size = size;

	return (ht);
}
