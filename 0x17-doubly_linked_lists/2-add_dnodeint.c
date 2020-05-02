#include "lists.h"
/**
 * add_dnodeint - function that adds a new node
 * @head: start
 * @n: const int
 * Return: added list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_dint = NULL;

	new_dint = malloc(sizeof(dlistint_t));

	if (new_dint == NULL)
	{
		return (NULL);
	}
	new_dint->n = n;
	new_dint->prev = NULL;

	if (*head == NULL)
	{
		new_dint->next = NULL;
	}
	else
	{
		new_dint->next = *head;
		(*head)->prev = new_dint;
	}
	*head = new_dint;
	return (new_dint);
}
