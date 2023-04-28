#include "main.h"
/**
 * _strpbrk - function body
 * @s: string to be checked
 * @accept: string to be passed
 * Return: returns pointer to a string after checking its occurence in s
 */
char *_strpbrk(char *s, char *accept)
{
	char *s_ptr, *accept_ptr;

	while (*s)
	{
		s_ptr = s;
		accept_ptr = accept;

		while (*accept_ptr)
		{
			if (*s_ptr == *accept_ptr)
			{
				return (s_ptr);
			}
			accept_ptr++;
		}
		s++;
	}
	return (0);
}
