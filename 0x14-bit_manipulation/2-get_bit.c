#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * powr - function that powers a number
 * @base: the number to be powered
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
 * get_bit - function to get the bit at an index
 * @n: the integer
 * @index: the index of the bit
 * Return: returns 0 or 1 depending on the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index < 0)
		return (-1);
	return (((n & powr(2, (int)index)) > 0 ? 1 : 0));
}
