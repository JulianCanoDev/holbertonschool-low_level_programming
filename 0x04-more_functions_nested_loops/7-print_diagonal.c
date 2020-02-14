#include "holberton.h"

/**
 * print_diagonal: Entry point
 * @n: int variable
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int x;
	int y = 0;

	for (y = 0 ; y <= n  ; y++)
	{
		for (x = y ; x > 0 ; x--)
		{
			_putchar(' ');
		}
	_putchar('/');
	_putchar('\n');
	}
	if (y < 1)
	{
		_putchar('\n');
	}
}
