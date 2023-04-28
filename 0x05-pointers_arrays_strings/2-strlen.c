#include "main.h"
/**
 * _strlen - gets the length of a string
 *
 * @s: string is passed here
 *
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int length;

	int i = 0;

	while (*(s + i) != '\0')
	{
		++i;
	}
	length = i;
	return (length);
}
