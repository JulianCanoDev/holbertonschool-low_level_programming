#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;

	for (a = 97 ; a < 123 ; a++)
	{
		if (a != 'q' && a != 'e')
		{
			putchar(a);
		}
	}
putchar('\n');
return (0);
}
