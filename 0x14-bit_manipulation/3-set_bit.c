#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * powr - function that powers a number
 * @base: the base
 * @exp: the exponent
 * Return: returns the powered number
 */
int powr(int base, int exp)
{
	if (exp == 0)
		return (1);
	return (base * powr(base, exp - 1));
}

/**
 * set_bit - function that sets a bit at index to 1
 * @n: the integer whose bit is to be set
 * @index: the index to set the bit at index
 * Return: returns the updated number
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	*n = (*n | powr(2, index));
	return (*n);
}
