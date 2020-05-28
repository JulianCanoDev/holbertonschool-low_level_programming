#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: unsigned long int
 * return: Created table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *new_hash_table;
	unsigned int i = 0;

	new_hash_table = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (new_hash_table == NULL)
    {
		return (NULL);
    }

	new_hash_table->array = (hash_node_t **) malloc(sizeof(hash_node_t *) * size);

	if (new_hash_table->array == NULL)
	{
		free(new_hash_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
    {
		new_hash_table->array[i] = NULL;
    }

	new_hash_table->size = size;

	return (new_hash_table);
}
