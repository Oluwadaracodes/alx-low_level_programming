#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to
 * a 2-dimensional array of integers
 * @width: width
 * @height: height
 * Return:pointer to 2-dimensional array of integers
 * on failure, return NULL and also if width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **alloc;
	int a, b;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	alloc = malloc(height * sizeof(int *));

	if (alloc == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		alloc[a] = malloc(width * sizeof(int));
		if (alloc[a] == NULL)
		{
			for (b = 0; b < a; b++)
			{
				free(alloc[b]);
			free(alloc);
			return (NULL);
			}
		}
		for (b = 0; b < width; b++)
		{
			alloc[a][b] = 0;
		}
	}
	return (alloc);
}
