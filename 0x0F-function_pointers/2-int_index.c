#include "function_pointers.h"
/**
 * int_index - function to call function to pointer
 * @array: the array
 * @size: size of the array
 * @cmp: pointer to function
 * Return: returns the position ofin the array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int result;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		if (result != 0)
		{
			return (i);
		}
	}
	return (-1);
}
