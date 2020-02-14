#include "holberton.h"

/**
 * print_diagonal: Entry point
 * @n: int variable
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int x = 0;
	int y = 0;

	for (y = 0 ; y != x ; y++)
	{
		for (x = 0 ; x <= n)
		_putchar(' ');
		_putchar('/');
		_putchar('\n');
	}
}
