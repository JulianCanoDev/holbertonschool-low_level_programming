#include "holberton.h"

/**
 * _strncpy - Entry point
 * @dest: char pointer
 * @src: char pointer
 * @n: int variable
 * Return: Always 0 (Success).
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

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
