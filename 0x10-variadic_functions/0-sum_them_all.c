#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - variadic function that perfoms summatiotn on arguments
 * @n: number of arguments
 * Return: returns the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int x;
	unsigned int c;
	int s = 0;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (c = 0; c < n; c++)
	{
		x = va_arg(args, int);
		s += x;
	}
	va_end(args);
	return (s);
}
