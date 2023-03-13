#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: adress of grid
 * @height: width of grid
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
