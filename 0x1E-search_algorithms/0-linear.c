#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - function that implements the linear search
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to search
 * Return: returns the index of the value found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
