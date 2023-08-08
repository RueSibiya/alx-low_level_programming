#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free memory allocated for  2D array
 * @grid: 2D grid
 * @height: height Of grid
 * Description: frees memory of grid
 * Return: nothing
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

