#include "holberton.h"

/**
 * print_diagonal: Entry point
 * @n: int variable
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i = 0;

	for (i = 0 ; i < n ; i++)
	{
		_putchar(' ');
		_putchar('/');
		_putchar('\n');
	}
}
