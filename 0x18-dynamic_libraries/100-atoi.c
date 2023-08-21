#include <stdio.h>
#include "main.h"

/**
 * _atoi - function that converts a string to an int
 * @s: the string
 * Return: returns the integer
 */
int _atoi(char *s)
{
	int i = 0;
	int num = 0;

	while (s[i])
	{
		num *= 10;
		num += s[i] - '0';
	}
	return (num);
}
