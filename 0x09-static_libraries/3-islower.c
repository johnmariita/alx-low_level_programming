#include "main.h"
/**
 * _islower - returns 1 if character is lowercase and 0
 * if character is uppercase
 *
 * @c: character's ascii code is passed to this parameter
 *
 * Return: returns 1 if lowercase and 0 if uppercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
