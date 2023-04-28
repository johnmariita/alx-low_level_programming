#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0 on success
 *
 */
int main(int argc, char *argv[])
{
	int result = 1;
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			long int x = strtol(argv[i], NULL, 10);

			result = result * x;
		}
		printf("%d\n", result);
		return (0);
	}
}
