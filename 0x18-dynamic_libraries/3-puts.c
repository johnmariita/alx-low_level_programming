#include "main.h"

/**
 * _puts - function that prints a string
 * @str: string to be printed
 * Return: return the number of characters printed
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar(10);
}
