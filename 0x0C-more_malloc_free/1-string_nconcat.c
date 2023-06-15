#include <stdlib.h>
#include "main.h"

/**
 * _strlen - function that gets the length of a string
 * @str: the string;
 * Return: returns the length of the string;
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}
/**
 * string_nconcat - concatanates two string
 * @s1: the 1st string
 * @s2: the 2nd string
 * @n: the number of bytes that should be copied from s2
 * Return: returns the concatanated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	unsigned int i = 0, j = 0;
	int s1_length = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_length = _strlen(s1);
	new_string = malloc(s1_length + n + 1);
	if (new_string == NULL)
		return (NULL);
	while (s1[i])
	{
		new_string[i] = s1[i];
		i++;
	}
	while (s2[j] && j <= n && n > 0)
	{
		new_string[i] = s2[j];
		i++;
		j++;
	}
	new_string[i] = '\0';
	return (new_string);
}
