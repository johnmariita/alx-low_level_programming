#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - a variadic function that prints numbers
 * @separator: will be printed between the numbers
 * @n: the number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);
	while (i < n)
	{
		if (i == n - 1)
			printf("%d\n", va_arg(ap, int));
		else
		{
			if (separator)
				printf("%d%s", va_arg(ap, int), separator);
			else
				printf("%d", va_arg(ap, int));
		}
		i++;
	}
	va_end(ap);
}
