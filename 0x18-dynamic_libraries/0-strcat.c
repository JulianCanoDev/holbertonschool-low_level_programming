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

	for (i = 0 ; dest[i] != '\0' ; i++)
	{
	}
	for (len = 0 ; src[len] != '\0' ; len++)
	{
		dest[i + len] = src[len];
	}
src = '\0';
return (dest);
}
