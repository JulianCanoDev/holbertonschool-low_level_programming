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

	if (str == NULL)
	{
		return ('\0');
	}
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		size++;
	}
	size += 1;
	copy = malloc(size * sizeof(char));
	if (copy == NULL)
	{
		return (NULL);
	}
	for (j = 0 ; j < size ; j++)
	{
		copy[j] = str[j];
	}
	copy[size] = '\0';
	return (copy);
}
