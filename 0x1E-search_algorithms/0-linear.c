#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - function that uses the linear search
 * algorithm to search for an element
 * @array: the array containing the element
 * @size: the size of the array
 * @value: the value to be searched in the array
 * Return: returns the index of the element
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
	}
	return (-1);
}
