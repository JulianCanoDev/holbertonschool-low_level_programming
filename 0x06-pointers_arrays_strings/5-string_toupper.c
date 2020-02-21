#include "holberton.h"

/**
 * string_toupper - Entry point
 * @s: char pointer
 * Return: Always 0 (Success).
 */
char *string_toupper(char *s)
{
	int i = 0;

	for (i = 0 ; s[i] != 0 ; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
	}
return (s);
}
