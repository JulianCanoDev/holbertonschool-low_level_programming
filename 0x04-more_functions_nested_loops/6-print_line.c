#include "holberton.h"

/**
 * print_line - Entry point
 * @n: int variable
 * Return: Always 0.
 */
void print_line(int n)
{
	int i = 0;

	for (i = 0 ; i < n ; i++)
	{
		_putchar('_');
	}
_putchar('\n');
}
