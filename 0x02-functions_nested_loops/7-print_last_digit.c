#include "main.h"
/**
 * print_last_digit -  printts the last digit
 *
 * @num: the number is passed to this parameter
 *
 * Return: returns the last digit
 */
int print_last_digit(int num)
{
	int m;

	m = num % 10;
	if (m < 0)
	{
		m = m * -1;
	}
	_putchar('0' + m);
	return (m);
}
