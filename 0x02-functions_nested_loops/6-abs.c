#include "holberton.h"

/**
 * _abs - Entry point
 * @n: int variable
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	} 
}
