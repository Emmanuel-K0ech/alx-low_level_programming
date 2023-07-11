#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a 2D grid array that was dynamically allocated
 * @grid: pointer to the 2D array
 * @height: the number of rows in the grid
 *
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
