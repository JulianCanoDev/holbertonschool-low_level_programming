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
