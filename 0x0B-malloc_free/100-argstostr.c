#include "main.h"
#include <stdlib.h>
/**
 * argstomy_string - main entry
 * @ac: argument count
 * @av: argument vector
 * Return: returns 0
 */
char *argstostr(int ac, char **av)
{
	int i, n, r = 0, l = 0;
	char *my_string;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l += ac;

	my_string = malloc(sizeof(char) * l + 1);

	if (my_string == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	{
		my_string[r] = av[i][n];
		r++;
	}
	if (my_string[r] == '\0')
	{
		my_string[r++] = '\n';
	}
	}

	return (my_string);
}

