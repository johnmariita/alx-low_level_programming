#include <stdlib.h>
#include "main.h"
/**
 * str_concat - func to concartanate
 * @s1: first string
 * @s2: second string
 * Return: returns concartanated string
 */
char *str_concat(char *s1, char *s2)
{
	char *cat;
	int i = 0, j = 0, m = 0, n = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
	{
		i++;
		j++;
	}
	cat = (char *)malloc(i + 1);

	if (cat == NULL)
		return (NULL);
	while (s1[m] != '\0')
	{
		cat[m] = s1[m];
		m++;
	}
	while (s2[n] != '\0')
	{
		cat[m] = s2[n];
		m++;
		n++;
	}
	cat[m] = '\0';
	return (cat);
}
