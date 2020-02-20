#include "holberton.h"

/**
 * _strncat - Entry point
 * @dest: char pointer
 * @src: char pointer
 * @n: int variable
 * Return: Always 0 (Success).
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len1 = 0;

	for (i = 0 ; dest[i] ; i++)
	{
		len1++;
	}
	char *ptr = dest + len1;

	while (*src != '\0' && n--)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
