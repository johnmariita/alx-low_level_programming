#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - function that returns a pointer to function
 * @s: the operator to be checked
 * Return: returns the function pointer after the sign is found
 */
int (*get_op_func(char *s))(int a, int b)
{
	int i = 0;
	op_t op[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (op[i].op)
	{
		if (strcmp(op[i].op, s) == 0)
			return (op[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
}
