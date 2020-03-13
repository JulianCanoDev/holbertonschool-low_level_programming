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
	char *save;
	unsigned int i = 0;

	va_start(p, n);
	for (i = 0 ; i < n ; ++i)
	{
		save = va_arg(p, char*);
		if (save == NULL)
		{
			printf("nil");
		}
		printf("%s", save);
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(p);
}
