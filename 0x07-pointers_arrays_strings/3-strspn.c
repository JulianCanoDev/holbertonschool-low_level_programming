#include "holberton.h"

/**
 * _strspn - Entry point
 * @s: char pointer
 * @accept: char pointer
 * Return: Always 0 (Success).
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned  int j = 0;

	for (i = 0 ; s[i] ; i++)
	{
		for (j = 0 ; accept[j] ; j++)
		{
			if (s[i] == s[j])
			{
				break;
			}
		}
		if (!accept[j])
		{
			break;
		}
	}
return (i);
}
