#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function that concatanates two strings
 * @s1: the 1st string
 * @s2: the 2nd string
 * Return: returns the concatanated string
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int count = 0;
	int i = 0, j = 0;

	if (s1 == NULL && s2 == NULL)
		return ("");
	if (s1 == NULL)
		return (s2);
	if (s2 == NULL)
		return (s1);
	while (s1[count])
		count++;
	while (s2[i])
	{
		count++;
		i++;
	}
	i = 0; /*re-initializing i to 0*/
	new_str = malloc(count + 1);
	if (!new_str)
		return (NULL);
	while (s1[i])
	{
		new_str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}
	return (new_str);
}
