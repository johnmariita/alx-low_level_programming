#include <stdio.h>
#include "main.h"

/**
 * _strncpy - function that copies n number of bytes
 * @dest: the destination
 * @src: the source
 * @n: the number of bytes
 * Return: returns a pointer to the destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
