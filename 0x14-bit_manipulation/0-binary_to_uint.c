#include <stdio.h>
#include <string.h>
#include <math.h>
#include "main.h"
/**
 * powr - function to calculate the power
 * @base: the base
 * @exp: the exponent
 * Return: returns the power
 */
int powr(int base, int exp)
{
	if (exp == 0)
		return (1);
	else
		return (base * powr(base, exp - 1));
}
/**
 * binary_to_uint - function to convert binary to int
 * @b: string representing the binary
 * Return: returns the converted string
 *
 */
unsigned int binary_to_uint(const char *b)
{
	int len = strlen(b);
	int myint = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	len--;
	while (len >= 0)
	{
		if (b[len] != '1' && b[len] != '0')
			return (0);
		if (b[len] == '0')
			myint += 0;
		if (b[len] == '1')
		{
			myint += powr(2, i);
		}
		len--;
		i++;
	}
	return (myint);
}
