#include "holberton.h"

/**
 * verify - Entry point
 * @n: int variable
 * @i: int variable
 * Return: Always 0 (Success).
 */
int verify(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (verify(n, i + 1));
	}
}
/**
 * _sqrt_recursion - Entry point
 * @n: int variable
 * Return: Always 0 (Success).
 */
int _sqrt_recursion(int n)
{
	int i;
	i = verify(n, 1);

	return (i);
}
