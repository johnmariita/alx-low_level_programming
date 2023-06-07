#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - function that gets string length using recursion
 * @s: a string whose length is to be calculated
 * Return: returns the length of the string
 */
int _strlen_recursion(char *s)
{
	static int count;

	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		count++;
	}
	return (count);
}
