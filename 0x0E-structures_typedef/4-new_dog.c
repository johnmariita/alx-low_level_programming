#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - function that creates a dog structure
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 * Return: returns the address of the structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog = malloc(sizeof(dog_t));

	if (n_dog == NULL)
		return (NULL);
	n_dog->owner = malloc(strlen(owner) + 1);
	strcpy(n_dog->owner, owner);
	n_dog->name = malloc(strlen(name) + 1);
	strcpy(n_dog->name, name);
	n_dog->age = age;
	return (n_dog);
}
