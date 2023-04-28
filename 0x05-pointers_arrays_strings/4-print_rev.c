#include "main.h"
/**
 * print_rev - function that reverses a string
 *
 * @s: string is passed here
 */
void print_rev(char *s)
{
	int i = 0;

	int b;

	while (*(s + i) != '\0')
	{
		++i;
	}
	for (b = i - 1; b >= 0; b--)
	{
		_putchar(*(s + b));
	}
	_putchar('\n');
}
