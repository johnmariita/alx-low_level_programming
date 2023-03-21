#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - function to free
 * @d: structure to be freed
 *
 */
void free_dog(dog_t *d)
{
	free(d);
}
