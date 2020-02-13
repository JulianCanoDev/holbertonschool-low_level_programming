#include "holberton.h"

/**
 * jack_bauer - Entry point
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;

	for (hours = 0 ; hours <= 23 ; hours++)
	{
		for (minutes = 0 ; minutes <= 59 ; minutes++)
		{
			if (hours <= 9)
			{
				_putchar(48);
				_putchar(hours % 10);
			}
			else
			{
				_putchar(hours / 10);
				_putchar(hours % 10);
			}
			_putchar(':');
			if (minutes <= 9)
			{
				_putchar(48);
				_putchar(minutes % 10);
			}
			else
			{
				_putchar(minutes / 10);
				_putchar(minutes % 10);
			}
			_putchar('\n');
		}
	}
}
