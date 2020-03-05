#include "holberton.h"

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: char pointer
 * @s2: char pointer
 * @n: int variable
 * Return: Char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int size_s1 = 0;
	unsigned int size_s2 = 0;
	char *asign_malloc;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
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
	i = 0;
	if (n >= size_s2)
	{
		n = size_s2;
	}
	asign_malloc = malloc((size_s1 + n + 1) * sizeof(char));
	for (i = 0 ; i < size_s1 ; i++)
	{
		asign_malloc[i] = s1[i];
	}
	i = 0;
	for (i = 0 ; i < n ; i++)
	{
		asign_malloc[i + size_s1] = s2[i];
	}
	asign_malloc[i + size_s1] = '\0';
	return (asign_malloc);
}
