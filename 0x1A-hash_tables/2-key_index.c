#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 * @key: unsigned char
 * @size: long int
 * Return: key's index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int long_hash;
	unsigned long int index;

	if (size == 0)
    {
		return (0);
    }

	long_hash = hash_djb2(key);
	index = long_hash % size;

	return (index);
}
