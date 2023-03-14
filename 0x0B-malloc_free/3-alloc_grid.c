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
	int i = 0, j = 0, k = 0;
	int **my_grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	my_grid = malloc(sizeof(int *) * height);

	if (my_grid == NULL)
		return (NULL);
	for (; i < height; i++)
	{
		my_grid[i] = malloc(sizeof(int) * width);
		if (my_grid[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(my_grid[i]);
			}
			free(my_grid);
			return (NULL);
		}
	}
	for (; j < height; j++)
	{
		for (; k < width; k++)
			my_grid[j][k] = 0;
	}
	return (my_grid);

}
