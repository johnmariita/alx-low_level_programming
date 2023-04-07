#include <stdio.h>
#include "main.h"
/**
 * power - function to power a number to an exponent
 * @base: the base to be powered
 * @exp: the exponent
 * Return: returns the base powered
 *
 */
unsigned long int power(unsigned long int base, unsigned long int exp)
{
	unsigned long int res = 1;

	if (exp == 0)
	{
		return (1);
	}
	while (exp > 0)
	{
		res = res * base;
		exp--;
	}
	return (res);
}
/**
 * set_bit - function to set a bit at a particular index to 1
 * @n: pointer to the integer whose bit is to be set
 * @index: the index of the bit to be set to 1
 * Return: returns a pointer to the integer after the bit is set
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n | power(2, index);
	return ((int)*n);
}
