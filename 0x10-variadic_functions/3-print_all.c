#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints out the arguments
 * @format: the format string
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list ap;
	char *string;

	va_start(ap, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				putchar(va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 's':
				string = va_arg(ap, char *);
				if (string == NULL)
				{
					printf("(nil)");
					i++;
					continue;
				}
				while (*string)
					putchar(*(string++));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
