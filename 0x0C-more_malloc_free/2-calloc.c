#include <stdlib.h>
#include "main.h"

/**
 * _calloc - function that creates memory and initializes it to 0
 * @nmemb: the number of members
 * @size: the size of each member
 * Return: return the address
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	unsigned char *ptr;
	size_t i = 0;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	ptr = (unsigned char *)mem;
	while (i < size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
