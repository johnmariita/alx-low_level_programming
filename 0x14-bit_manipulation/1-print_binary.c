#include <stdio.h>
#include "main.h"
/**
 * powr - function that computes the power of a number
 * @base: the base
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
 * print_binary - function that prints binary
 * @n: the integer to be converted to binary
 */
void print_binary(unsigned long int n)
{
	int i = 0;
	unsigned long bit_counter = n;

	while (bit_counter > 0)
	{
		bit_counter >>= 1;
		i++;
	}
	i--;
	if (n == 0)
		_putchar('0');
	while (i >= 0)
	{
		if ((n & powr(2, i)))
			_putchar('1');
		else
			_putchar('0');
		i--;
	}
	_putchar((n & 1) + 1);
}
