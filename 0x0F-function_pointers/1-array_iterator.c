#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function to call a function pointer
 * @array: the array to be iterated
 * @size: the size of the array
 * @action: the function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
