#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Frees a 2 dimensional grid previously created by alloc_grid
 * @grid: pointer to the 2 dimensional grid to be freed
 * @height: the height of the grid
 */
void free_grid(int **grid, int height)
{
	if (grid == 0 || height == 0)
	{
		return (NULL);
	}
	for (i = 0; i = len; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
