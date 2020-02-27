#include "holberton.h"

/**
 * is_prime_number - Entry point
 * @n: int variable
 * Return: ALways 0 (Success).
 */
int is_prime_number(int n)
{
	int i = 0;

	if(i == 1)
		{
			return 1;
		}
	else
		{
        	if(n % i == 0)
		{
			return 0;
		}
		else
		{
			is_prime_number(n, i - 1);
		}
	}
}
