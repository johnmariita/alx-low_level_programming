#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "calc.h"

/**
 * main - the main function
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0 on success
 */
int main(__attribute__((unused)) int argc, char **argv)
{
	int num1, num2, result;
	int (*func_p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && num2 == 0)
	{
		printf("Error\n");
		exit(98);
	}
	func_p = get_op_func(argv[2]);
	result = func_p(num1, num2);
	printf("%d\n", result);
	return (0);
}
