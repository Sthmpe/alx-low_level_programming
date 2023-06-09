#include "main.h"
/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 * @width: The width of the array.
 * @height: The height of the array.
 *
 * Return: NUll if on failure.
 *         if width or height is 0 or negative, return NULL.
 */
int **alloc_grid(int width, int height)
{
	int i, j, **alloc_grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	alloc_grid = (int **) malloc(sizeof(int *) * height);

	if (alloc_grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		alloc_grid[i] = (int *) malloc(sizeof(int) * width);
		if (alloc_grid[i] == NULL)
		{
			while (i >= 0)
				{
					free(alloc_grid[i]);
					i--;
				}
				free(alloc_grid);
				return (NULL);
		}
		for (j = 0; j < width; j++)
			alloc_grid[i][j] = 0;
	}
	return (alloc_grid);
}
