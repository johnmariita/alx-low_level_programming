#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that frees the allocated memory
 * @d: the structure
 */
void free_dog(dog_t *d)
{
	free(d);
}
