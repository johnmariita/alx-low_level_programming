#include "main.h"
/**
 * _strstr - entry of the function
 * @haystack: pointer to the string to search
 * @needle: pointer to the string to sublocate
 * Return: returns string after located
 */
char *_strstr(char *haystack, char *needle)
{
	char *h_ptr, *n_ptr, *start;

	while (*haystack)
	{
		h_ptr = haystack;
		n_ptr = needle;
		start = haystack;

	while (*h_ptr && *n_ptr && *h_ptr == *n_ptr)
	{
		h_ptr++;
		n_ptr++;
	}

	if (*n_ptr == '\0')
	{
		return (start);
	}

	haystack++;
	}

	return (0);
}

