#include "main.h"
/**
 * cap_string - function to capitalizee string
 * @c: pointer to dtring to be capitalized
 * Return: returns capitalized string
 *
 */
char *cap_string(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (((c[i] == ' ') || (c[i] == '.' ||
		c[i] == '\n' || c[i] == '	' ||
		c[i] == ',' || c[i] == ';' || c[i] == '!' ||
		c[i] == '?' || c[i] == '"' || c[i] == 40 ||
		c[i] == 41 || c[i] == 123 || c[i] == 125)) &&
		(c[i + 1] >= 97 && c[i + 1] <= 122))
			c[i + 1] -= 32;
		i++;
	}
	return (c);
}
