#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that duplicates a string
 * @str: the string to be duplicated
 * Return: returns the address of the duplicated string
 */
char *_strdup(char *str)
{
	int count = 0, i = 0;
	char *dup_string;

	if (!str)
		return (NULL);
	while (str[count])
		count++;
	dup_string = malloc(count);
	if (!dup_string)
		return (NULL);
	while (i < count)
	{
		dup_string[i] = str[i];
		i++;
	}
	return (dup_string);
}
