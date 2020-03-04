#include "holberton.h"

/**
 * str_concat - function that concatenates two strings.
 * @s1: char array pointer
 * @s2: char array pointer
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int size_s1 = 0;
	int size_s2 = 0;
	char *copy;

	if (s1 == NULL)
	{
		s1 = malloc(1);
	}
	if (s2 == NULL)
	{
		s2 = malloc(1);
	}
	for (i = 0 ; s1[i] != '\0' ; i++)
	{
		size_s1++;
	}
	i = 0;
	for (i = 0 ; s2[i] != '\0' ; i++)
	{
		size_s2++;
	}
	size_s2++;
	copy = malloc((size_s1 + size_s2) * sizeof(char));
	if (copy == NULL)
	{
		return (NULL);
	}
	i = 0;
	for (i = 0 ; i < size_s1 ; i++)
	{
		copy[i] = s1[i];
	}
	i = 0;
	for (i = 0 ; i < size_s2 ; i++)
	{
		copy[i + size_s1] = s2[i];
	}
	copy[size_s1 + size_s2] = '\0';
	return (copy);
}
