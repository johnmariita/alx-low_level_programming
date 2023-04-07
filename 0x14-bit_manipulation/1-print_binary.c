#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_binary - function that prints a binary
 * @n: the integer to be printed in binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}

	_putchar('0' + (n & 1));
}
