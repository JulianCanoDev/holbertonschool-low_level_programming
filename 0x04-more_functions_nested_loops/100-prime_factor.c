#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0.
 */
int main(void)
{
	int pf;
	int a = 2;
	long int b = 612852475143;

	while (b != a)
	{
		if (b % a == 0)
		{
			pf = a;
			b = b / a;
		}
		else
		{
			a++;
		}
	}
	pf = a;
	printf("%d \n", pf);
	return (0);
}