#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - function that gets string length using recursion
 * @s: a string whose length is to be calculated
 * Return: returns the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
