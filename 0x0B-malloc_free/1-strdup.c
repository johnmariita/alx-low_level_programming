#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strdup - function to copy string to a new location
 * @str: string
 * Return: returns new address to new location
 *
 */
char *_strdup(char *str)
{
	char *dup;
	int i = 0, j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	dup = (char *)malloc (i + 1);
	if (dup == NULL)
		return (NULL);
	for (; str[j]; j++)
		dup[j] = str[j];
	dup[j] = '\0';
	return (dup);
}
