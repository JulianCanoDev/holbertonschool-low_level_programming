#include "holberton.h"

/**
 * print_most_numbers - Entry point
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int num = 0;

	for (num = 48 ; num <= 57 ; num++)
	{
		if (num != 50 && num != 52)
		{
			_putchar(num);
		}
	}
_putchar('\n');
}
