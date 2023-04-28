#include "main.h"
/**
 * print_line - function to draw a line
 *
 * @n: number of lines
 *
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
