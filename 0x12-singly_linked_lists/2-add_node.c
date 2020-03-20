#include "lists.h"

/**
 * add_node - duplicate
 * @head: list
 * @str: char
 * Return: duplicate
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	int strlen = 0;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		strlen++;
	}
	new->str = strdup(str);
	new->len = strlen;
	new->next = *head;
	*head = new;
	return (new);
}
