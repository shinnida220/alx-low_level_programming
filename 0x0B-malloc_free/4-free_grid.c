#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimensional
 * grid previously created by your alloc_grid function
 * @grid: multidimensional array of integers.
 * @height: height of the grid.
 *
 * Return: void, nothing
 */
void free_grid(int **grid, int height)
{
	if (height > 0 && grid != NULL)
	{
		for (; height >= 0; height--)
			free(grid[height]);

		free(grid);
	}
}
