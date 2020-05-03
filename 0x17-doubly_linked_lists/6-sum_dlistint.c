#include "lists.h"

/**
 * sum_dlistint -  function that returns the sum
 * @head: list
 * Return: add
 */
int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	while (head)
	{
		add = add + head->n;
		head = head->next;
	}
	return (add);
}
