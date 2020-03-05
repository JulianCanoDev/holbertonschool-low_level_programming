#include "holberton.h"

/**
 * malloc_checked -  function that allocates memory using malloc.
 * @b: Unsigned int variable
 * Return: Void
 */
void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);

	if (x == NULL)
	{
		exit(98);
	}
	else
	{
		return (x);
	}
}
