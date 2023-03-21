#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - function to create a new dog struct
 * @name: name of the dog
 * @age: dog's age
 * @owner: dog's owner
 * Description: creates anew struct
 * Return: returns the created struct
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nc, oc;
	int name_len, owner_len;
	char *name_copy, *owner_copy;
	dog_t *n_dog = malloc(sizeof(dog_t));

	if (n_dog == NULL)
		return (NULL);
	name_len = _strlen(name);
	owner_len = _strlen(owner);
	name_copy = malloc(sizeof(char) * name_len + 1);
	if (name_copy == NULL)
	{
		free(name_copy);
		return (NULL);
	}
	while (name[nc] != '\0')
	{
		name_copy[nc] = name[nc];
		nc++;
	}
	name[nc] = '\0';
	owner_copy = malloc(sizeof(char) * owner_len + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(owner_copy);
		return (NULL);
	}
	while (owner[oc] != '\0')
	{
		owner_copy[oc] = owner[oc];
		oc++;
	}
	owner_copy[oc] = '\0';
	n_dog->name = name;
	n_dog->age = age;
	n_dog->owner = owner;
	return (n_dog);
}
