#include "main.h"
/**
 * _strncat - concartanates strings
 *
 * @dest: destination
 * @src: source
 * @n: maximum number
 * Return: returns destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		if (j >= n)
			break;
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
