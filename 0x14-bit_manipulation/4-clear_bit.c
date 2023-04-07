#include <stdio.h>
#include "main.h"
/**
 * power - function that powers a number
 * @base: the base
 * @exp: the exponent
 *
 */
unsigned long int power(unsigned long int base, unsigned long int exp)
{
	unsigned long int res = 1;

	if (exp == 0)
		return (1);
	while (exp > 0)
	{
		res = res * base;
		exp--;
	}
	return (res);
}
/**
 * clear_bit - function that turns a bit to 0
 * @n: pointer to the number
 * @index: the index to be set to 0
 * Return: returns 1 on success and -1 incase of fail
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-8);
	*n &= ~(power(2, index));
	return (1);
}
