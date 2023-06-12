#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: String that will be appended
 * @src: String to be concatenated upon
 * Return: returns poiner to the destination
 */
char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
