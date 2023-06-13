#include "main.h"
/**
 * free_grid - frees a 2d array
 * @grid: memory block to be freed
 * @height: the height of the memory block to be freed
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

