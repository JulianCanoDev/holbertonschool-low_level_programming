#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked
 * @h: pointer
 * Return: number of elements of list
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
