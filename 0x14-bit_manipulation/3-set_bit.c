#include "main.h"
#include <stdio.h>
/**
 * powr - function to calculate the power
 * @base: the base
 * @exp: the exponent
 * Return: returns the power of the base to the exponent
 */
unsigned long powr(unsigned long base, unsigned long exp)
{
	if (exp == 0)
		return (1);
	return (base * powr(base, exp - 1));
}
/**
 * set_bit - function to set bit to 1
 * @n: pointer to the integer
 * @index: the index to be changed
 * Return: returns 1 on success and -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);
	*n = *n | powr(2, index);
	return (1);
}
