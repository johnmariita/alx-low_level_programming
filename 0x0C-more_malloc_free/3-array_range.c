#include <stdlib.h>
#include "main.h"
/**
 * array_range - function to return array range
 * @min: the lowest value
 * @max: max value
 * Return: returns the array
 */
int *array_range(int min, int max)
{
	int *my_arr;
	int i;
	int size = max - min + 1;

	if (min > max)
		return (NULL);
	my_arr = malloc(size * sizeof(int));
	if (my_arr == NULL)
		return (NULL);
	for (i = 0; i <= max; i++)
		my_arr[i] = min++;
	return (my_arr);
}
