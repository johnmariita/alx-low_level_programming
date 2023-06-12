#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _putchar - function that prints a character to the stdout
 * @c: the character
 * Return: returns 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
