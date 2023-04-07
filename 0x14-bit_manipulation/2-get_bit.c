#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * get_bit - function that gets a bit at a particular index
 * @n: the number
 * @index: the index
 * Return: returns the bit at the position
 */
int get_bit(unsigned long int n, unsigned int index)
{
	n >>= index;
	return (n & 1);
}
