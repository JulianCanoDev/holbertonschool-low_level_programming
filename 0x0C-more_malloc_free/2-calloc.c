#include "holberton.h"

/**
 * _memset - Entry point
 * @s: char pointer
 * @b: char variable
 * @n: int variable
 * Return: Always 0 (Success).
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
return (s);
}

/**
 * _calloc - function that allocates memory for an array.
 * @nmemb: unsigned int variable
 * @size: unsigned int variable
 * Return: void.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mal;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	mal = malloc(nmemb * size);
	if (mal == NULL)
	{
		return (NULL);
	}
	_memset(mal, 0, (nmemb * size));
	return (mal);
}
