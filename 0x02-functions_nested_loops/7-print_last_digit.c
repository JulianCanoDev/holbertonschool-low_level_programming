#include "holberton.h"

/**
 * print_last_digit - Entry point
 * @x: int variable
 * Return: Always 0 (Success)
 */
int print_last_digit(int x)
{
	if (x < 0)
	{
		_putchar(((x % 10) * -1) + 48);
		return ((x % 10) * -1);
	}
	else
	{
		_putchar((x % 10) + 48);
		return (x % 10);
	}
}
