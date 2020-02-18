#include "holberton.h"

/**
 * _puts - Entry pointer
 * @str: char variable
 * Return: Always 0 (Success).
 */
void _puts(char *str)
{
	int i = 0;

	for (i = 0 ; str[i] != 0 ; i++)
	{
		_putchar(str[i]);
	}
_putchar('\n');
}
