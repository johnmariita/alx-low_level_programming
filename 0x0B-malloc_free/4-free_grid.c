#include <stdlib.h>
#include "main.h"
/**
 * free_grid - function to free grid
 * @grid: memory to be freed
 * @height: number of rows
 *
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
