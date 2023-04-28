#include "main.h"
/**
 * _strlen_recursion - function to get length of a string
 * @s: string to get the length of
 * Return: returns the length of the string
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n++;
		n += _strlen_recursion(s + 1);
	}
	return (n);
}
