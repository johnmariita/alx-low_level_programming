#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0 on success
 */
int main(int argc, char *argv[])
{
	int i;
	int a = 1, b = 0;
	int res = 0;

	for (; a < argc; a++)
	{
		for (; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	if (argc < 2)
	{
		printf("0\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			int x = strtol(argv[i], NULL, 10);

			if (!isdigit(*argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				res += x;
			}
		}
	}
	printf("%d\n", res);
	return (0);
}
