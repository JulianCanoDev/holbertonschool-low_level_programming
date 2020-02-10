#include "holberton.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int file_letters = 0;
	int letter = 0;

	for (file_letters = 0 ; file_letters <= 9 ; file_letters++)
	{
		for (letter = 'a' ; letter <= 'z' ; letter++)
		{
			_putchar(letter);
		}
	_putchar('\n');
	}
}
