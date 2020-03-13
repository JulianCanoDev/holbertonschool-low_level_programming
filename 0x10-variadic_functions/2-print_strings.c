#include "variadic_functions.h"

/**
 * print_strings - function that prints strings.
 * @separator: char array pointer
 * @n: unsigned int
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i = 0;

	va_start(p, n);
	for (i = 0 ; i < n ; ++i)
	{
		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(p);
}
