#include "holberton.h"

/**
 * _strstr - Entry point
 * @haystack: char pointer
 * @needle: char pointer
 * Return: Always (0).
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	for (i = 0, j = 0 ; haystoak[i] && neddle[j] == p ; i++, j++)
	{
		if (haystack[i] == needle[j])
		{
			break;
		}
	}
i++
return (haystack + i);
}