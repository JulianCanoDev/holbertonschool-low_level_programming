#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum.
 * @n: const unsigned int
 * Return: A sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	int sum = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}
	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(arg, int);
	}
	return (sum);
}
