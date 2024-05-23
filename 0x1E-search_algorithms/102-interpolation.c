#include <stdio.h>
#include "search_algos.h"

/**
 * interpolate - function that finds the value being
 * searched for using interpolation algorithm
 * @array: the array containing the value
 * @low: the lowest index, where the search begins
 * @high: highest index, where the search ends
 * @value: the value being searched for
 * Return: returns the index of the value, -1 if not present
 */
int interpolate(int *array, int low, int high, int value)
{
	size_t pos = low + (((double)(high - low) / (array[high] -
					array[low])) * (value - array[low]));

	if (low <= high && value >= array[low] && value <= array[high])
	{
		if (array[pos] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			return (pos);
		}
		if (array[pos] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			return (interpolate(array, pos + 1, high, value));
		}
		else
		{
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			return (interpolate(array, low, pos - 1, value));
		}
	}
	if (pos > sizeof(array) / 4)
		printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}

/**
 * interpolation_search - function that calls the interpolate function
 * @array: the array to perform the search on
 * @size: the size of the array
 * @value: the value to search for
 * Return: returns the value returned by the interpolate function and
 * -1 if the array is null
 */
int interpolation_search(int *array, size_t size, int value)
{
	int high = size - 1, low = 0;

	if (!array)
		return (-1);
	return (interpolate(array, low, high, value));
}
