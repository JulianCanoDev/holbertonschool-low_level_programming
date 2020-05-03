#include "lists.h"

/**
 * get_dnodeint_at_index - function that return the nth node.
 * @head: pointer to the head.
 * @index: number.
 *
 * Return: address of the node or NULL if the index does not exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *aux_node = NULL;

	aux_node = malloc(sizeof(dlistint_t));

	if (aux_node == NULL)
	{
		return (NULL);
	}

	while (head)
	{
		if (i == index)
		{
			aux_node->n = head->n;
			aux_node->next = head->next;
			aux_node->prev = head->prev;
			return (aux_node);
		}
		i++;
		head = head->next;
	}
	return (NULL);
}
