#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * powr - function to calculate power
 * @base: the base
 * @exp: the exponent
 * Return: returns the power of a number
 */
unsigned int powr(int base, int exp)
{
	while (exp > 0)
		return (base * powr(base, exp - 1));
	return (1);
}

/**
 * binary_to_uint - function that converts binary to integer
 * @b: string containing the binary
 * Return: returns the integer represented by the binary
 */
unsigned int binary_to_uint(const char *b)
{
	int len = strlen(b) - 1;
	unsigned int sum = 0, i = 0;

	while (len >= 0)
	{
		if (b[len] >  '1' || b[len] < '0')
			return (0);
		if (b[len] == '1')
			sum += powr(2, i);
		i++;
		len--;
	}
	return (sum);
}
