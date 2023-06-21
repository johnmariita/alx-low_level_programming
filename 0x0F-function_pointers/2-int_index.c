#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function to call the function pointer
 * @array: the array of indexes
 * @size: the size of the array
 * @cmp: the function pointer
 * Return: returns the index of the array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size < 1)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]) > 0)
			return (i);
		i++;
	}
	return  (-1);
}
