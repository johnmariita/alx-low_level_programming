#include "main.h"
/**
 * _memset - memset function
 * @s: where the memory is set
 * @b: the character to be stored in the memory
 * @n: bytes to be stored
 * Return: returns pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
