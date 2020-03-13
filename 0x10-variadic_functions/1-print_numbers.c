#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: char pointer array
 * @n: unsigned int
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i = 0;

	va_start(p, n);
	for (i = 0 ; i < n ; ++i)
	{
		printf("%d", va_arg(p, int));
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(p);
}
