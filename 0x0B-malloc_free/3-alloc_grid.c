#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - function to allocate grid
 * @width: width of the grid
 * @height: height of the grid
 * Return: returns address of the grid
 */
int **alloc_grid(int width, int height)
{
	int h = 0, w = 0, i = 0;
	int **my_grid = NULL;

	if (height == 0 || width == 0)
		return (NULL);
	my_grid = (int **)malloc(width * sizeof(int));
	if (my_grid == NULL)
		return (NULL);

	for (; i < width; i++)
	{
		my_grid[i] = (int *)malloc(height * sizeof(int));
		if (my_grid == NULL)
			return (NULL);
	}
	for (; w < width; w++)
	{
		for (; h < height; h++)
		{
			my_grid[w][h] = 0;
		}
	}
	return (my_grid);
}
