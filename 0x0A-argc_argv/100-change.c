#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0 on success
 */
int main(int argc, char *argv[])
{
	int x = atoi(argv[1]);
	int change = 0;
	int j;
	int coins[] = {1, 2, 5, 10, 25};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (x < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 4; j >= 0 && x >= 0; j--)
	{
		while (x >= coins[j])
		{
			change++;
			x -= coins[j];
		}
	}
	printf("%d\n", change);
	return (0);
}
