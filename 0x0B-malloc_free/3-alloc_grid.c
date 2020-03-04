#include "holberton.h"

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array.
 * @width: int variable
 * @height: int variable
 * Return: Always 0.
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int row;
	int column;

	if (width <= 0 || height <= 0)
	{
		return ('\0');
	}
	array = malloc(sizeof(int *) * height);
	if (!array)
	{
		return ('\0');
	}
	for (row = 0; row < height; ++row)
	{
		array[row] = malloc(sizeof(int) * width);

		if (!array[row])
		{
			while (--row > -1)
				free(array[row]);
			free(array);
			return ('\0');
		}
		for (column = 0; column < width; ++column)
		{
			array[row][column] = 0;
		}
	}
	return (array);
}
