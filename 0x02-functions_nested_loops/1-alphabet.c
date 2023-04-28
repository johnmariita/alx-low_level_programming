#include "main.h"
/**
 * print_alphabet  - prints out all the alphabets
 *
 * Return: returns 0 on success
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
