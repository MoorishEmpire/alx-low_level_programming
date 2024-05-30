#include "main.h"
#include <stdlib.h>

/**
  * free_grid - Frees a 2 dimensional grid previously created by alloc_grid.
  * @grid: Return value of grid function.
  * @height: The height of the array.
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
