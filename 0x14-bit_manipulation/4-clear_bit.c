#include "holberton.h"

/**
 * clear_bit - clear
 * @n: unsigned long int
 * @index: unsigned int
 * Return: cleared
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ms;

	ms = (sizeof(unsigned long int) * 8 - 1);
	if (index > ms)
	{
		return (-1);
	}
	*n = *n & ~(1ul << index);
	return (1);
}
