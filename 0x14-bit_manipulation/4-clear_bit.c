#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * powr - function to calculate the power
 * @base: the base
 * @exp: the exponent
 * Return: returns the power of a number
 */
unsigned long int powr(int base, int exp)
{
	if (exp == 0)
		return (1);
	return (base * powr(base, exp - 1));
}
/**
 * clear_bit - function that sets a bit to 0
 * @n: the integer
 * @index: index to be changed
 * Return: returns -1 on failure and 1 0n success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > 64)
		return (-1);
	*n = *n & (~(powr(2, index)));
	return (1);
}
