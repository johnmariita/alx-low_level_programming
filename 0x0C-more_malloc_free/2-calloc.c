#include <stdlib.h>
#include "main.h"
/**
 * _calloc - calloc function
 * @nmemb: number of blocks
 * @size: size of each block
 * Return: returns a pointer to the memory address
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *calloc;

	if (nmemb == 0 || size == 0)
		return (NULL);
	calloc = malloc(nmemb * size);
	return (calloc);
}
