#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array
 * @size: size of the array
 * @c: the character to be filled
 * Return: returns the address of the array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	array = malloc(sizeof(char) * size);
	if (!array)
		return (NULL);
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
