#include <stdio.h>
/**
 * get_endianness - function to get the endianness of the system
 * Return: returns 1 for little endian and 0 for big endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *bit = (char *)&num;

	if (*b == 1)
		return (1);
	else
		return (0);
}
