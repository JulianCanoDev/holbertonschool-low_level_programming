#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int prime_factor;
	long int num = 612852475143;

	for (i = 2 ; num > 1 ; i++)
	{
		while ((num % i) == 0)
		{
			prime_factor = i;
			num /= i;
		}
	}
printf("%d\n", prime_factor);
return (0);
}
