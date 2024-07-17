#include <stdio.h>
#include "search_algos.h"

/**
 * binary - Function that searches through an array recursively
 * @arr: the array
 * @low: First index to start the search at
 * @hi: last index where the search should end at
 * @val: the value to search for
 * Return: returns the index of the array or -1 if not found
 */
int binary(int *arr, int low, int hi, int val)
{
	int i;
	int mid = low + (hi - low) / 2;

	if (low <= hi)
	{
		printf("Searching in array: ");
		for (i = low; i <= hi; i++)
		{
			if (i != hi)
				printf("%d, ", arr[i]);
			else
				printf("%d\n", arr[i]);
		}
		if (arr[mid] == val)
			return (mid);
		if (arr[mid] > val)
		{
			return (binary(arr, low, mid - 1, val));
		}
		else
			return (binary(arr, mid + 1, hi, val));
	}
	return (-1);
}

/**
 * binary_search - Function that calls the recursive function
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to search for
 * Return: returns the value from the binary function
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (binary(array, 0, size - 1, value));
}
