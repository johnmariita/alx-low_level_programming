#include "main.h"
/**
 * string_toupper - function to convert a string to upper case
 * @c: pointer to the character
 * Return: returns pointer to a converted string
 */
char *string_toupper(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= 97 && c[i] <= 122)
			c[i] -= 32;
		i++;
	}
	return (c);
}
