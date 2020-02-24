#include "holberton.h"

/**
 * _strchr - Entry point
 * @s: char pointer
 * @c: char variable
 * Return: Always 0 (Success).
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
	{
		return (s + i);
	}
return (0);
}
