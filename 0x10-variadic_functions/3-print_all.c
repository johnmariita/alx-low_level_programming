#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function to print out everything
 * @format: format passed on the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *separator = "";
	va_list args;

	va_start(args, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(args, int));
					break;
				case 's':
					printf("%s%s", separator, va_arg(args, char *));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(args, double));
					break;
				default:
					i++;
					continue;
			}
			i++;
			separator = ", ";
		}
	}
	printf("\n");
	va_end(args);
}