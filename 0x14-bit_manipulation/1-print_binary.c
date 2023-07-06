#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_binary - function that prints an integer in binary
 * @n: the integer
 */
void print_binary(unsigned long int n)
{
	char b[1024];
	int i = 0, count = 0, x = (int)n;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (x > 0)
	{
		b[i] = ((x & 1) + '0');
		x >>= 1;
		i++;
	}
	b[i] = '\0';
	i = 0;
	while (b[i])
	{
		count++;
		i++;
	}
	i = 0;
	count -= 1;
	while (count >= 0)
	{
		_putchar(b[count]);
		count--;
	}
}
