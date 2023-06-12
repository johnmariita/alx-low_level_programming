#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function that creates a grid
 * @width: the width of the grid
 * @height: the height of the grid
 * Return: returns the address to the grid
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int) * height);
	if (!grid)
		return (NULL);
	for (; i < height; i++)
		grid[i] = malloc(sizeof(int) * width);
	if (!*grid)
		return (NULL);
	i = 0;
	for (; i < height; i++)
		for (; j < width; j++)
			grid[i][j] = 0;
	return (grid);
}
