#include "main.h"
/**
 * rot13 - function to encode
 * @c: string to be encoded
 * Return: returns encoded string
 */
char *rot13(char *c)
{
	int i, j;
	char s1[] =
	"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] =
	"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
		{
			if (c[i] == s1[j])
			{
				c[i] = s2[j];
				break;
			}
		}
	}
	return (c);
}
