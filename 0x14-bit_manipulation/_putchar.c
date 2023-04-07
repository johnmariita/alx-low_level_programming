#include <unistd.h>
/**
 * _putchar - function to print a character
 * @c: the character to be printed
 * Return: returns the printed character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
