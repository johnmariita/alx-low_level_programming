#include <stdio.h>
#include "main.h"
/**
 * power- function to get the power of a base to an exponent
 * @base: the base
 * @exp: the exponent
 * Return: returns the powered base
 */
unsigned long int power(unsigned long int base, unsigned int exp)
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
 * flip_bits - a function that determines how many bits to be flipped
 * @n: the first number
 * @m: the second number
 * Return: returns the number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0, count = 0;

	for (; i < 31; i++)
	{
		if ((n & power(2, i)) == (m & power(2, i)))
			count += 0;
		else
			count++;
	}
	return (count);
}
