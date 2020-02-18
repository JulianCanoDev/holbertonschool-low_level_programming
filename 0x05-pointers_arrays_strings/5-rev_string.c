#include "holberton.h"

/**
 * rev_string - Entry pointer
 * @s: char pointer
 * Return: Always 0 (Success).
 *
 */
void rev_string(char *s)
{
	int i = 0;
	int rev = 0;
	int temp = 0;

	for (i = 0 ; s[i] != 0 ; i++)
	{
		rev++;
	}
	for (i = rev - 1 ; i > 4 ; i--)
	{
		temp = s[i];
		s[i] = s[rev - 1 - i];
		s[rev - 1  - i] = temp;
	}
}
