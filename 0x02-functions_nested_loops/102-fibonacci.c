#include <stdio.h>
/**
 * main - entry point for the program
 *
 * Return: returns 0 on success
 */
int main(void)
{
	long int i, c;
	long int a = 1;
	long int b = 2;

	for (i = 1; i <= 50; i++)
	{
		if (i == 50)
		{
			printf("%ld\n", a);
		}
		else
		{
			printf("%ld, ", a);
		}
		c = a + b;
		a = b;
		b = c;
	}
	return (0);
}
