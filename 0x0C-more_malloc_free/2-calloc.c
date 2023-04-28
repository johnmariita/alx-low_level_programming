#include <stdlib.h>
#include "main.h"
/**
 * _memset - function to set each memory address to c
 * @set: memoroy to be allocated whatever you want
 * @val: what to be entered
 * @n: how many times
 * Return: returns address to the memory
 *
 */
char *_memset(char *set, char val, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		set[i] = val;
	}
	return (set);
}
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
	if (calloc == NULL)
		return (NULL);
	_memset(calloc, 0, nmemb * size);
	return (calloc);
}
