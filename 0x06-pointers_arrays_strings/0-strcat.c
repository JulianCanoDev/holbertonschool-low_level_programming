#include "holberton.h"

/**
 * _strcat - Entry point
 * @dest: char pointer
 * @src: char pointer
 * Return: Always 0 (Success).
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int len = 0;

	for (i = 0 ; dest[i] != 0 ; i++)
	{
		len++;
	}
	for (i = len ; src[i] != 0 ; i++)
	{
		_putchar(src[i]);
	}
return (dest);
}
