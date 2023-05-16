#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimensional grid
 * previously created by my alloc_grid function.
 * @grid: my 2D grid
 * @height: height
 * Return:(just frees grid)
 */
void free_grid(int **grid, int height)
{
	int a = 0;

	if (grid == NULL)
	{
		return;
	}
	while (a < height)
	{
		free(grid[a]);
		grid[a] = NULL;
		a++;
	}
	free(grid);
}
