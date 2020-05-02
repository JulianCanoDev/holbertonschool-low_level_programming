#include "holberton.h"
/**
 * get_endianness - function that checks the endianness.
 * Return: checks the endianness
 */
int get_endianness(void)
{
	unsigned int i = 1;

	if (*(char *)&i == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
