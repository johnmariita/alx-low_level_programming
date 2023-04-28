#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Return: returns 0 on success
 */
int main(void)
{
	long int a = 1;
	long int b = 2;
	long int sum = 0;
	long int c;

	while (a <= 4000000)
	{
		if (a % 2 == 0)
			sum = sum + a;
		c = a + b;
		a = b;
		b = c;
	}
	printf("%ld\n", sum);
	return (0);
}
