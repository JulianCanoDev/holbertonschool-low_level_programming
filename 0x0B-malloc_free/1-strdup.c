#include "holberton.h"

/**
 * _strdup - function that returns a pointer.
 * @str: char pointer array
 * Return: char
 */
char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	int size = 0;
	char *copy;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		size++;
	}
	copy = malloc(size * sizeof(char));
	if (copy == null)
	{
		exit(exit_failure);
	}
	for (j = 0 ; j < size ; j++)
	{
		copy[j] = str[j];
	}
	return (copy);
}
