#include <math.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * min - function that returns the minimum of  two values
 * @a: the first value
 * @b: the other value
 * Return: returns the minimum of two values
 */
int min(int a, int b)
{
	if (a > b)
		return (b);
	else
		return (a);
}

/**
 * jump_search - function that performs the jump search
 * @array: the array tp search
 * @size: the size of the array
 * @value: the value to search for
 * Return: returns the index of the value or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	int low = 0, i;
	int m = sqrt(size);
	int high = m;

	if (!array)
		return (-1);
	while (array[min(high, size - 1)] < value)
	{
		printf("Value checked array[%d] = [%d]\n", low, array[low]);
		low = high;
		high += m;
		if ((size_t) low == size - 1)
			break;
	}
	printf("Value checked array[%d] = [%d]\n", low, array[low]);
	printf("Value found between indexes [%d] and [%d]\n", low, low + m);
	for (i = low; (size_t) i <= size - 1; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
