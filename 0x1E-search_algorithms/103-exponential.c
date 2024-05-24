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


	if (low > high)
		return (-1);
	printf("Searching in array: ");
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

/**
 * min - function that finds the minimum of two integers
 * @a: the first integer
 * @b: the second integer
 * Return: returns the minimum of two integers
 */
int min(int a, int b)
{
	if (b > a)
		return (a);
	else
		return (b);
}

/**
 * exponential_search - function that searches for a element
 * exponentially
 * @array: the array containing the element
 * @size: the size of the array
 * @value: the element to be searched for
 * Return: returns the index of the element, -1 if not present
 */
int exponential_search(int *array, size_t size, int value)
{
	int i = 1, res;

	if (!array)
		return (-1);
	while (i < (int)size && array[i] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i *= 2;
	}
	i /= 2;
	printf("Value found between indexes [%d] and [%d]\n", i,
			min((i * 2), size - 1));
	if ((size - i) + 1 <= 0)
		return (-1);
	res = advanced_binary(&array[i], (min((i * 2), size - 1) - i + 1), value);
	return (res > 0 ? res + i : -1);
}
