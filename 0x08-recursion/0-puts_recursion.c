#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - function that prints a string using recursion
 * @s: the string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}
	_puts_recursion(++s);
	_putchar(*s);
}
