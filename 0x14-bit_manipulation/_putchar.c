#include <unistd.h>

/**
 * _putchar - function that emulates the putchar
 * @c: the character to be printed
 * Return: returns 1 0n success, -1 on failure
 */
int _putchar(int c)
{
	return (write(1, &c, 1));
}
