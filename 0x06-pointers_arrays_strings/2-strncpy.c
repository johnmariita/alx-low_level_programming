#include "main.h"
/**
 * _strncpy - copies a string to another
 * @dest: destination
 * @src: source
 * @n: number of strings to be copied
 * Return: returns the destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0')
	{
		if (i >= n)
			break;
		dest[i] = src[i];
		i++;
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
