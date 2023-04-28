#include "main.h"

/**
 * print_times_table - prints out multiplication table from 0 to n
 * @n: size of the table
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, m;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			m = i * j;
			if (j == 0)
				_putchar('0' + m);
			else
			{
				_putchar(',');
				_putchar(' ');
				if (m < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + m);
				}
				else if (m < 100)
				{
					_putchar(' ');
					_putchar('0' + m / 10);
					_putchar('0' + m % 10);
				}
				else
				{
					_putchar('0' + m / 100);
					_putchar('0' + (m / 10) % 10);
					_putchar('0' + m % 10);
				}
			}
		}
		_putchar('\n');
	}
}
