#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function that frees an allocated memory
 * @grid: the memory address
 * @height: the rows
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
