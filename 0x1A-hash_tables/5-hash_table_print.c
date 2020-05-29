#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: const table
 * Return: Printed table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	unsigned long int size = 0;
	unsigned long int number_of_nodes = 0;
	hash_node_t *elements;

	if (ht == NULL)
	{
		return;
	}
	size = ht->size;
	printf("{");
	for (i = 0 ; i < size ; i++)
	{
		if (ht->array[i] != NULL)
		{
			elements = ht->array[i];
			while (elements != NULL)
			{
				if (number_of_nodes > 0)
				{
					printf(", ");
				}
				printf("'%s': ", elements->key);
				printf("'%s': ", elements->value);
				number_of_nodes++;
				elements = elements->next;
			}
		}
	}
	printf("}\n");
}
