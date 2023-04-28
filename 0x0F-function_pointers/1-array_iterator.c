#include "function_pointers.h"
/**
 * array_iterator - function to call the function  pointer
 * @array: the array
 * @size: size of the array
 * @action: function to pointer
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}

}
