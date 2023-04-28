#include "main.h"
/**
 * puts_half - function to print hslf of the screen
 *
 * @str: the string is passsed here
 */
void puts_half(char *str)
{
	int len = 0, i = 0;
	int start;

	while (*(str + len) != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len + 1) / 2;
	for (i = start; i < len; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
