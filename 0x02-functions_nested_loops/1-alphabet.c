#include "holberton.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int letter = 0;

	for (letter = 'a' ; letter <= 'z' ; letter++)
	{
		_putchar(letter);
	}
_putchar('\n');
}
