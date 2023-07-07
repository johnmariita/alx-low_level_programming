#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * powr - function that powers a number
 * @base: the base
 * @exp: the exponent
 * Return: returns the power
 */
int powr(int base, int exp)
{
	if (exp == 0)
		return (1);
	return (base * powr(base, exp - 1));
}

/**
 * clear_bit - function that sets bit at index to 0
 * @n: the integer whose bit is to be set to 0
 * @index: the index to set the bit at
 * Return: returns 1 on succes and -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n = (*n & ~(powr(2, index)));
	return (1);
}
