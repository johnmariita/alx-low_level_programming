#include <stdio.h>
/**
 * main - entry point for the program
 *
 * Return: returns 0 on success
 */
int main(void)
{
	unsigned long long i, c;
	unsigned long long a = 1;
	unsigned long long b = 2;

	for (i = 1; i <= 98; i++)
	{
		if (i == 98)
			printf("%llu\n", a);
		else
			printf("%llu, ", a);
		c = a + b;
		a = b;
		b = c;
	}
	return (0);
}
