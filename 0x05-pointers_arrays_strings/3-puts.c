#include "main.h"
/**
 * _puts - function that prints the string
 *
 * @str: string is passed here
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		++i;
	}
	_putchar('\n');
}
