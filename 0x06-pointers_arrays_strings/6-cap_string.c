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
		if ((i == 0) && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] -= 32;
		}
		if ((s[i] == ',' || s[i] == ';') && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
		{
			s[i + 1] -= 32;
		}
		if ((s[i] == '\t' || s[i] == '\n') && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
		{
			s[i + 1] -= 32;
		}
		if ((s[i] == '}' || s[i] == ' ') && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
		{
			s[i + 1] -= 32;
		}
		if ((s[i] == ')' || s[i] == '{') && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
		{
			s[i + 1] -= 32;
		}
		if ((s[i] == '"' || s[i] == '(') && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
		{
			s[i + 1] -= 32;
		}
		if ((s[i] == '!' || s[i] == '?') && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
		{
			s[i + 1] -= 32;
		}
		if ((s[i] == '.') && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
		{
			s[i + 1] -= 32;
		}
	}
return (s);
}
