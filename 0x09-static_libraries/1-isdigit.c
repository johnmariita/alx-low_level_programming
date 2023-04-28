#include "main.h"
/**
 * _isdigit - checks if character is 0
 *
 * @c: character value is passed here
 *
 * Return: returns 1 if character is a digit and 0 if character is not a digit
 *
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
