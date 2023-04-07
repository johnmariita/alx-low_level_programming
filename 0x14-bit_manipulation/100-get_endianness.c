#include <stdio.h>
#include "main.h"
/**
 * get_endianness - function to get the endianness of the machine
 * Return: returns 1 for little endian, 0 for big endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *bit = (char *)&num;

	if (*bit == 1)
		return (1);
	else
		return (0);
}
