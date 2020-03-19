#include "lists.h"

/**
 * list_len - Count len
 * @h: the list
 * Return: Number
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
