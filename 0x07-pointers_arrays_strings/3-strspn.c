#include "main.h"
/**
 * _strspn - function declaration
 * @s: string to be checked
 * @accept: string being passed on
 * Return: returns the size of a strings prefix
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
	}
		if (accept[j] == '\0')
		{
			return (i);
		}
	}
	return (i);
}
