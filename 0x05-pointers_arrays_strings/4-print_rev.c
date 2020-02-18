#include "holberton.h"

/**
 * print_rev - Entry point
 * @s: char  pointer
 * Return: Always 0 (Success).
 */
void print_rev(char *s)
{
	int i = 0;
	int rev = 0;

	for (i = 0 ; s[i] != 0 ; i++)
	{
		rev++;
	}
	for (i = rev - 1 ; s[i] > 0 ; i--)
	{
		_putchar(s[i]);
	}
_putchar('\n');
}
