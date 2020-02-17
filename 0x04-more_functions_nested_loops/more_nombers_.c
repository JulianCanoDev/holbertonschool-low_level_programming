#include "holberton"

void more_numbers(void)
{
	int num_1 = 0;
	int num_2 = 0;
	
	for (num_1 = 0 ; num_1 <= 9 ; num_1++)
	{
		for (num_2 = 0 ; num_2 <= 14 ; num_2++)
		{
			if (num_2 <= 9)
			{
				_putchar((num_2 / 10) + 48);
			}
		_putchar((num_2 % 10) + 48);
		}
	}
 }
