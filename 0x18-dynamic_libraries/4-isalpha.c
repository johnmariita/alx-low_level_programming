#include "main.h"
/**
 * _isalpha - controls if a character is alphabetical
 * @c: the character
 * Return: returns 1 if it's an alphabet
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
return (0);
}
