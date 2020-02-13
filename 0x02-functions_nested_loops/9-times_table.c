#include "holberton.h"

/*
 * times_table - example table
 *
 * return - always 0 (success)
 */
void times_table(void)
{
	int num_1 = 0;
	int num_2 = 0;
	int multiply;

	for (num_1 = 0 ; num_1 <= 9 ; num_1++)
	{
		for (num_2 = 0 ; num_2 <= 9 ; num_2++)
		{
			multiply = num_1 * num_2;
			if (multiply <= 9)
			{
				_putchar(multiply + 48);
				_putchar(44);
				_putchar(32);
				_putchar(32);
			}
			else
			{
				_putchar((multiply / 10) + 48);
				_putchar((multiply % 10) + 48);
				_putchar(44);
				_putchar(32);
			}
		}
	_putchar('\n');
	}
}
