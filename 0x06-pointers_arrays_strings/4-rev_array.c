#include "holberton.h"

/**
 * reverse_array -Entry point
 * @a: int pointer
 * @n: int variable
 * Return: Always 0 (Success).
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp = 0;

	for (i = n - 1 ; i > (n - 1) / 2 ; i--)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1  - i] = temp;
	}
}
