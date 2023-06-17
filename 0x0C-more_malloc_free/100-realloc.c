#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _realloc - function that reallocates memory
 * @ptr: the memory tobe allocated
 * @old_size: the size of ptr
 * @new_size: the size of the newly allocated memory
 * Return: returns the newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;

	if (new_size == old_size)
		return (ptr);
	if (!ptr)
	{
		mem = malloc(new_size);
		if (!ptr)
			return (NULL);
		return (mem);
	}
	mem = malloc(new_size);
	if (!mem)
		return (NULL);
	memcpy(mem, ptr, old_size);
	return (mem);
}
