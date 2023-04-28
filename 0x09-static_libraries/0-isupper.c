#include "main.h"
/**
 * _isupper - function to check if character is an uppercase
 *
 * @c: value of the character is passed here
 * Return: returns 1 if character id uppercase and 0 if character is lowercase
 *
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
