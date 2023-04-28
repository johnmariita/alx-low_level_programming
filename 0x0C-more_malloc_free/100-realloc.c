#include <stdlib.h>
#include "main.h"
/**
 * _realloc - function to reallocate memory
 * @ptr: memory to be reallocated
 * @old_size: size of the old mem location
 * @new_size: size of the new memory address
 * Return: returns pointer to the new memory address
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *n_ptr;
	char *o_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	n_ptr = malloc(new_size);
	if (n_ptr == NULL)
		return (NULL);
	o_ptr = n_ptr;
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			n_ptr[i] = o_ptr[i];
		}
	}
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
		{
			n_ptr[i] = o_ptr[i];
		}
	}
	free(ptr);
	return (n_ptr);
}
