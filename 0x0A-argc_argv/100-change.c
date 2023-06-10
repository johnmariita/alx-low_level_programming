#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main function
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0 on success
 */
int main(int argc, char **argv)
{
	int total;
	int change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	total = atoi(argv[1]);
	if (total / 25 > 0)
	{
		change += (total / 25);
		total %= 25;
	}
	if (total / 10 > 0)
	{
		change += (total / 10);
		total %= 10;
	}
	if (total / 5 > 0)
	{
		change += (total / 5);
		total %= 5;
	}
	if (total / 2 > 0)
	{
		change += (total / 2);
		total %= 2;
	}
	if (total / 1 > 0)
	{
		change += (total / 1);
		total %= 1;
	}
	printf("%d\n", change);
	return (0);
}
