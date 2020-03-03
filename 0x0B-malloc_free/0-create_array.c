#include "holberton.h"

/**
 * create_array - function that creates an array of chars.
 * @size: unsigned int variable
 * @c: char variable
 * Return: char variable
 */
char *create_array(unsigned int size, char c)
{
	char *R;

	if (!size)
	{
		return (NULL);
	}

	R = malloc(sizeof(char) * size);
	if (R == NULL)
	{
		return (NULL);
	}
	if (R)
	{
		while (size > 0)
		{
			R[--size] = c;
		}
	}
	return (R);
}
