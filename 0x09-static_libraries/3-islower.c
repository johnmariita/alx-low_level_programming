#include <stdio.h>
#include "main.h"

/**
 * _islower - function to check the case of a letter
 * @c: the character
 * Return: returns 1 if lower case and 0 if not
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
