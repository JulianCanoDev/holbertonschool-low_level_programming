#include "holberton.h"

/**
 * free_grid -  function that frees a 2 dimensional grid previously.
 * @grid: int pointer to pointer
 * @height: int variable
 * Return: Always 0.
 */
void free_grid(int **grid, int height)
{
	while (height)
		free(grid[--height]);
	free(grid);
}
