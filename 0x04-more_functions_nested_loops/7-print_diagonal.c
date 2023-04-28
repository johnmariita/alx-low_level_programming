#include "main.h"
/**
 * print_diagonal - function to print the diagonals
 *
 * @n: number of diagonals
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (i == j)
				{
					_putchar('\\');
					_putchar('\n');
				}
				else
					_putchar(' ');
			}
		}
	}
}
