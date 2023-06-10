#include <stdio.h>
#include <stdlib.h>

/**
 * myatoi - function to convert string to integer
 * @str: the string
 * Return: returns the converted number
 */
int myatoi(char *str)
{
	int num = 0, i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			printf("Error\n");
			exit(1);
		}
		num *= 10;
		num += str[i] - '0';
		i++;
	}
	return (num);
}

/**
 * main - the main function
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0 on success
 */
int main(int argc, char **argv)
{
	int sum = 0, i = 1;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	while (argv[i])
	{
		sum += myatoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	printf("%d\n", 101 % 25);
	return (0);
}
