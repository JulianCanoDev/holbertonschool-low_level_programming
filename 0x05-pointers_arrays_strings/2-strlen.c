#include "holberton.h"

/**
 * _strlen - Entry point
 * @s: char pointer
 * Return: Always 0 (Success).
 */
int _strlen(char *s)
{
	int len = 0;
	int i;

	for (i = 0 ; s[i] != 0 ; i++)
	{
		len++;
	}
	return (len);
}
