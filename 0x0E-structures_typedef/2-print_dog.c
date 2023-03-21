#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function to print dog properties
 * @d: dog structure
 *
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("NAME: nil\n");
	else
		printf("NAME: %s\n", d->name);
	printf("AGE: %f\n", d->age);
	if (d->owner == NULL)
		printf("OWNER: nil\n");
	else
		printf("OWNER: %s\n", d->owner);
}
