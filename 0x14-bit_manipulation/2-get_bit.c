#include "holberton.h"

/**
 * get_bit - Entry Point
 * @n: input
 * @index: index
 * Return: get
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits = 0;

	bits = (n >> index) & 1;

	if ((bits == 1) || (bits == 0))
	{
		return (bits);
	}
	else
	{
		return (-1);
	}
}
