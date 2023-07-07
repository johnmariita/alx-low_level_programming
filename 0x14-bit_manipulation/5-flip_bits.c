#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - function that returns bits to be flipped
 * @n: the 1st integer to be compared
 * @m: the 2nd integer
 * Return: returns the number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	while (n || m)
	{
		if ((n & 1) != (m & 1))
			count++;
		n >>= 1;
		m >>= 1;
	}
	return (count);
}
