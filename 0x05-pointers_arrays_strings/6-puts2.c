#include "holberton.h"

/**
 * puts2 - Entry point
 * @str: char pointer
 * Return: Always 0 (success).
 */
void puts2(char *str)
{
	int i = 0;

	for (i = 0 ; str[i] != 0 ; i += 2)
	{
		_putchar(str[i]);
	}
_putchar('\n');
}
