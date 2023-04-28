#include "main.h"
/**
 * puts2 - a function that prints part of a string
 *
 * @str: the string is passed here
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
		i++;
	}
	_putchar('\n');
}
