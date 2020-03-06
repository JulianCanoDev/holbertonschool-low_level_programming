#include "holberton.h"

/**
 * array_range - function that creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 * Return: int value
 */
int *array_range(int min, int max)
{
	int i = 0;
	int num = min;
	int *p;
	int score = 0;

	if (min > max)
	{
		return (NULL);
	}
	score = (max - min) + 1;
	p = malloc(score * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; num <= score ; i++)
	{
		p[i] = num;
		num++;
	}
	return (p);
}
