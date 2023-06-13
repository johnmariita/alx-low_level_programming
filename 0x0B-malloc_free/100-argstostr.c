#include <stdlib.h>
#include "main.h"

/**
 * *argstostr - function that converts arguments to strings
 * @ac: argument count
 * @av: arguments
 * Return: returns an address to the string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int count = 0, i = 0, j = 0, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		while (av[i][j])
		{
			count++;
			j++;
		}
		j = 0;
		i++;
	}
	str = malloc(count + ac + 1);
	i = 0, j = 0;
	while (i < ac)
	{
		while (av[i][j])
		{
			str[k] = av[i][j];
			k++;
			j++;
		}
		str[k] = '\n';
		j = 0;
		k++;
		i++;
	}
	str[k] = '\0';
	return (str);
}
