#include "main.h"
/**
 * times_table - a function that displays the times tables
 *
 */
void times_table(void)
{
	int i, j, a, b;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int k = i * j;

			if (k > 9)
			{
				a = k % 10;
				b = k / 10;
				if (j == 0)
				{
					_putchar(b + '0');
					_putchar(a + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(b + '0');
					_putchar(a + '0');
				}
			}
			else
			{
				if (j == 0)
					_putchar('0' + k);
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + k);
				}
			}
		}
		_putchar('\n');
	}
}
