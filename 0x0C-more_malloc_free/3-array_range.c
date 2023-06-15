#include <stdlib.h>
#include "main.h"

/**
 * array_range - function that creates an array containing a range
 * @min: the minimum number
 * @max: the maximum number
 * Return: returns the address
 */
int *array_range(int min, int max)
{
	int *mem;
	int i = 0;

	if (max < min)
		return (NULL);
	mem = malloc(((max - min) + 1) * sizeof(int));
	if (mem == NULL)
		return (NULL);
	while (min <= max)
	{
		mem[i] = min;
		i++;
		min++;
	}
	return (mem);
}
