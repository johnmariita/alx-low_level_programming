#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that malloc's
 * @b: the size of the area
 * Return: returns the memory address
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (!mem)
		exit(98);
	return (mem);
}
