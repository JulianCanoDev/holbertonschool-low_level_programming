#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: const hash table
 * @key: const char
 * Return: Associate key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int size = 0;
	unsigned long int index = 0;
	hash_node_t *actual_node;

	if (ht == NULL)
	{
		return (NULL);
	}
	size = ht->size;
	index = key_index((const unsigned char *)key, size);
	actual_node = ht->array[index];
	if (actual_node == NULL)
	{
		return (NULL);
	}
	while (actual_node != NULL)
	{
		if (strcmp(actual_node->key, key) == 0)
		{
			return (actual_node->value);
		}
		actual_node = actual_node->next;
	}
	return (NULL);
}
