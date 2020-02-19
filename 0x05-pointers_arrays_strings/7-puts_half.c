#include "holberton.h"

/**
 * puts_half - Entry point
 * @str: char pointer
 * Return: Always 0 (Seccess).
 */
void puts_half(char *str)
{
	int i = 0;
	int len = 0;
	int max = 0;

	for (i = 0 ; str[i] != 0 ; i++)
	{
		len++;
		max++;
	}
	if (len % 2 == 0)
	{
		len /= 2;
	}
	else
	{
		len = ((len - 1) / 2) + 1;
	}
	for (i = len  ; i < max ; i++)
	{
		_putchar(str[i]);
	}
_putchar('\n');
}
