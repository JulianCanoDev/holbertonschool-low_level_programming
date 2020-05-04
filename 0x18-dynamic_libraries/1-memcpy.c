#include "holberton.h"

/**
 * _memcpy - Entry point
 * @dest: char pointer
 * @src: char pointer
 * @n: unsigned int variable
 * Return: Always 0 (Success).
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
return (dest);
}
