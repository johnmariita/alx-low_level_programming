#include "main.h"
/**
 * powr - function to get the power
 * @base: the base
 * @exp: the exponent
 * Return: returns the power
 *
 */
int powr(int base, int exp)
{
	if (exp == 0)
		return (1);
	return (base * powr(base, exp - 1));
}
/**
 * get_bit - function to get the bit at a particular index
 * @n: the integer whose indexth bit we want
 * @index: the index at which we want the bit
 * Return: returns 1 if the bit is 1 and 0 if it's 0
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (1);
	if ((n & powr(2, index)) > 0)
		return (1);
	else
		return (0);
}
