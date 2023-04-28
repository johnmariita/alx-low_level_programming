#include <stdio.h>
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0 on success
 *
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int count = argc;

	for (; i < count; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
