#include <stdio.h>
#include <stdio.h>
#include "main.h"

/**
 * get_endianness - function that determines the endianness of the os
 * Return: returns 1 for little endian and 0 for big
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c == 1)
		return (1);
	else
		return (0);
}
