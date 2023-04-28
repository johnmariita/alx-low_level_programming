#include "main.h"
/**
 * _strcmp - function to compare strings
 * @s1: string one
 * @s2: string two
 * Return: returns the difference between the characters in the string
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (; s1[i] && s2[i]; i++)
	{
		if (s1[i] != s2[i])
			break;
	}
	return (s1[i] - s2[i]);
}
