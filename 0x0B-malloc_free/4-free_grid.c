#include "main.h"

/**
 * free_grid - frees a 2d array that was previously created
 * @grid: array to be freed
 * @height: height of array
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			if (grid[i] != NULL)
				free(grid[i]);
		}
		free(grid);
	}
}
