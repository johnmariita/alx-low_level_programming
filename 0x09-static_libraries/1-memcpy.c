#include "main.h"
/**
 * _memcpy - function to copy memory
 * @dest: destination
 * @src: source
 * @n: bytes
 * Return: returns destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
