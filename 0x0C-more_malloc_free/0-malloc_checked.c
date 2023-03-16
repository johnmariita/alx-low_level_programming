#include <stdlib.h>
#include "main.h"
/**
 * malloc - function to create memory
 * @b: size o fthe memory
 * Return: returns pointer to an address
 */
void *malloc_checked(unsigned int b)
{
	int *c = malloc(b);

	if (c == NULL)
		exit(98);
	return ((void *) c);
}
