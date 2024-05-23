#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * min - function that finds the minimum of two integers
 * @a: the first integer
 * @b: the second integer
 * Return: returns the smallest integer
 */
int min(int a, int b)
{
	if (a > b)
		return (b);
	else
		return (a);

}

/**
 * jump_search - function that searches an array using the
 * jump search algorithm
 * @array: the array to be searched
 * @size: size of the array
 * @value: the value to be searched
 * Return: returns the index the value is found at
 */
int jump_search(int *array, size_t size, int value)
{
	int i, j, m, k;

	if (!array)
		return (-1);
	i = 0;
	m = (int)sqrt(size);
	k = m;
	printf("Value checked array[%d] = [%d]\n", 0, 0);
	while (array[m] < value && m < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", m, array[m]);
		i = m;
		m += k;
		if (m > (int)size - 1)
		{
			printf("Value found between indexes [%d] and [%d]\n", m - k, m);
			printf("Value checked array[%d] = [%d]\n",
					min(m, size - 1), array[min(m, size - 1)]);
			return (-1);
		}
	}

	printf("Value found between indexes [%d] and [%d]\n", m - k, m);
	for (j = i; j <= m; j++)
	{
		if (array[j] == value)
		{
			for (i = m - k; i <= j; i++)
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
			return (j);
		}
	}
	return (-1);
}
