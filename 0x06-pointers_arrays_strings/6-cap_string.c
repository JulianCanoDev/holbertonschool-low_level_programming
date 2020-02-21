#include "holberton.h"

/**
 * cap_string - Entry point
 * @s: char pointer
 * Return: Always 0 (Success).
 */
char *cap_string(char *s)
{
	int i = 0;

	for (i = 0 ; s[i] != 0 ; i++)
	{
		if (s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}' || s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] -= 32;
			}
		}
	}
return (s);
}
