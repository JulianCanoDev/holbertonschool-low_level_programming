#include "holberton.h"

/**
 * swap_int - Entry point
 * @a: int pointer
 * @b: int pointer
 * Return: Always 0 (Success).
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
