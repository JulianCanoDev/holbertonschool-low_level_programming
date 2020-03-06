#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 *
 * Return: pointer to new memory allocated
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newp = NULL, *pptr = ptr;
	unsigned int i;

	if (old_size == new_size)
	{
		return (pptr);
	}
	if (pptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0)
	{
		free(pptr);
		return (NULL);
	}
	newp = malloc(new_size);
	if (!newp)
	{
		return (NULL);
	}
	for (i = 0; i < old_size && i < new_size; i++)
	{
		newp[i] = pptr[i];
	}
	free(pptr);
	return (newp);
}
