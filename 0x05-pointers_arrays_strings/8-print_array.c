#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Entry point
 * @*a: int pointer
 * @n: int variablw
 * Return: Always 0 (Success).
 */
void print_array(int *a, int n)
{
	int len = 0;

	for (len = 0 ; len < n ; len++)
	{
		if (len < n - 1)
		{
			printf("%d, ", a[len]);
		}
		else
		{
			printf("%d", a[len]);
		}
	}
printf("\n");
}
