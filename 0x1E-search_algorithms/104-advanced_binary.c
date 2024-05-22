#include <stdio.h>
#include "search_algos.h"

/**
 * search - function that uses the binary search algo
 * recuesively
 * @array: the array to search on
 * @low: the lowest index in the array
 * @high: the highest index
 * @x: the value to search
 * Return: return the index of the array and -1 if it's absent
 */
int search(int *array, int low, int high, int x)
{
	int mid = low + (high - low) / 2;
	int i;

	printf("Searching in array: ");

	if (low > high)
		return (-1);
	for (i = low; i <= high; i++)
	{
		if (i != high)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
	if (array[mid] == x)
		return (mid);
	if (array[mid] < x)
		return (search(array, mid + 1, high, x));
	else
		return (search(array, low, mid, x));
}

/**
 * advanced_binary - function that calls the binary search function
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to search for
 * Return: returns the value returned by the search algorithm
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (search(array, 0, size - 1, value));
}
