#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function that prints all natural numbers to 98
 *
 * @n: the number that the function is going to start from is passed here.
 *
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			{
				printf("%d", i);
			}
			else
				printf("%d, ", i);
		}
		printf("\n");
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
			{
				printf("%d", i);
			}
			else
				printf("%d, ", i);
		}
		printf("\n");
	}
}
