#include "holberton.h"

/**
 * more_numbers - Entry point
 * Return: Always 0.
 */
void more_numbers(void)
{
	int num1 = 0;
	int num2 = 0;

	for (num1 = 0 ; num1 <= 9 ; num1++)
	{
		for (num2 = 0 ; num2 <= 14 ; num2++)
		{
			if (num2 > 9)
			{
				_putchar((num2 / 10) + 48);
			}
			_putchar((num2 % 10) + 48);
			
		}
	_putchar('\n');
	}
}
