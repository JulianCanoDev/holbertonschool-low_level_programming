#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum.
 * @n: const unsigned int
 * Return: A sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list p;

	va_start(p, n);
	unsigned int i = 0, j = 1, val = 0;

	if (n == 0)
	{
		return (0);
	}
	for (j = 0 ; j < n ; ++j)
	{
		i = va_arg(p, int);
		val += i;
	}
	va_end(p);
	return (val);
}
