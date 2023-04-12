#include <stdlib.h>
#include "main.h"
/**
 * slen - function that returns character count
 * @s: the string
 * Return: returns the character count
 */
int slen(const char *s)
{
	int count = 0;

	while (*s)
	{
	count++;
		s++;
	}
	return (count);
}

/**
 * binary_to_uint - function to print the decimal of a binary
 * @b: the string that contains the binary
 * Return: returns the binary in decimal form
 *
 */
unsigned int binary_to_uint(const char *b)
{
	int c, i;
	unsigned int converted = 0;

	if (!b)
	{
		return (0);
	}
	c = slen(b);
	for (i = c - 1; i >= 0; i--)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		if (b[i] == '0')
		{
			converted += 0;
		}
		if (b[i] == '1')
		{
			converted += 1 << (c - i - 1);
		}
	}
	return (converted);
}
/**
 * powr - function to perform power
 * @base: the base to be powered
 * @exp: the exponent
 * Return: returns the power
 *
 */
unsigned int powr(unsigned int base, unsigned int exp)
{
	unsigned int i;

	if (exp == 0)
		return (1);
	for (i = 0; i < exp - 1; i++)
		base *= base;
	return (base);
}

