#include "main.h"
/**
 * _isalpha - checks if a character is an alphabet
 *
 * @c: ascii code of the character is passed to this parameter
 *
 * Return: returns 1 for an alphabet and 0 for a non-alphabet
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 127))
		return (1);
	else
		return (0);
}
