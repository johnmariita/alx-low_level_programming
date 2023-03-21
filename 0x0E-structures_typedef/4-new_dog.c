#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * new_dog - function to create a new dog struct
 * @name: name of the dog
 * @age: dog's age
 * @owner: dog's owner
 * Description: creates anew struct
 * Return: returns the created struct
 */
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len, owner_len;
	dog_t *dog;

	name_len = _strlen(name);
	owner_len = _strlen(owner);
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (name_len + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (owner_len + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
/**
 * _strlen - function to get string length
 * @name: string to get the length
 * Return: returns length of string
 */
int _strlen(char *name)
{
	int count = 0;

	while (name[count] != '\0')
		count++;
	return (count);
}
/**
* *_strcpy - copies the string pointed to by src
* including the terminating null byte (\0)
* to the buffer pointed to by dest
* @dest: pointer to the buffer in which we copy the string
* @src: string to be copied
*
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

