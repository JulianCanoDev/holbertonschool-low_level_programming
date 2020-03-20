#include "lists.h"

/**
 * free_list - free mamory
 * @head: free
 * Return: free
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free(head);
	}
}
