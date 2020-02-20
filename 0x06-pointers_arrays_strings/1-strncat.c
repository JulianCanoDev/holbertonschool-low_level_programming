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
	int len1 = 0;
	int len2 = 0;

	for (len1 = 0 ; dest[len1] != '\0' ; len1++)
	{
	}
	while (len2 < n && src[len2] != '\0')
	{
		*(dest + len1) = *(src + len2);
		len1++;
		len2++;
	}
	return (dest);
}
