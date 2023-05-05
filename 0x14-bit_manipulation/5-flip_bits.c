#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * powr - function tha powers a number to an exponent
 * @base: the base
 * @exp: the exponent
 * Return: returns the power
 */
unsigned int powr(int base, int exp)
{
	if (exp == 0)
		return (1);
	return (base * powr(base, exp - 1));
}
/**
 * flip_bits - function that counts bits to be flipped between two numbers
 * @n: the 1st integer
 * @m: the second integer
 * Return: returns the count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	int i = 0;

	for (; i < 64; i++)
	{
		if ((n & powr(2, i)) == (m & powr(2, i)))
			count += 0;
		else
			count++;
	}
	return (count);
}
