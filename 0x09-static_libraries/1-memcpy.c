#include "main.h"
/**
 * _memcpy - copies n bytes from @src to @dest
 * @src: area where bytes are copied from
 * @dest: destination bytes are copied to
 * @n: number of bytes to copy
 * Return: returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
