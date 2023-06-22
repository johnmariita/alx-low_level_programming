#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints a string
 * @separator: word separator
 * @n: amount of words
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *pointer;

	va_start(ap, n);
	while (i < n)
	{
		pointer = va_arg(ap, char *);
		if (pointer == NULL)
		{
			printf("(nil)");
			i++;
			continue;
		}
		else
		{
			while (*pointer)
			{
				printf("%c", *pointer);
				pointer++;
			}
			if (i != n - 1)
				printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
