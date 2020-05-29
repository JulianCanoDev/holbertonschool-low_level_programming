#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: hash table
 * Return: deleted hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int size;
	unsigned long int i;
	hash_node_t *element;
	hash_node_t *node_to_delete;

	i = 0;

	if (ht == NULL)
	{
		return;
	}
	size = ht->size;
	for (i = 0; i < size; i++)
	{
		if (ht->array[i] != NULL)
		{
			element = ht->array[i];
			while (element != NULL)
			{
				free(element->key);
				free(element->value);
				node_to_delete = element;
				element = element->next;
				free(node_to_delete);
			}
		}
	}
	free(ht->array);
	free(ht);
}
