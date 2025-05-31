#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 for success
 */

int main(void)
{
	int i = 97;

	for ( ; i <= 121; i++)
	{
		if (i != 101 && i != 113)
			putchar(i);
	}
	putchar('\n');
	return (0);
}
