#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Return: returns 0 on success
 */
int main(void)
{
	int n;
	int m = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			m = m + n;
		}
	}
	printf("%d\n", m);
	return (0);
}
