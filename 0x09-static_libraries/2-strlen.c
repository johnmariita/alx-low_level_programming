#include <stdio.h>
#include "main.h"

/**
 * _strlen - function that counts the characters of a string
 * @s: the string
 * Return: returns the number of strings
 */
int _strlen(char *s)
{
	int count = 0, i = 0;

	while (s[i])
	{
		count++;
		i++;
	}
	return (count);
}
