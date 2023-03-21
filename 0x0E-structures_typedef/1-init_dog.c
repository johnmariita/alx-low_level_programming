#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - function to create aa structure
 * @d: dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog's owner
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
