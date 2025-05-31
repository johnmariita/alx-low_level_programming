#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main -  Entry point
 *
 * Return: 0 for success
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	/* your code goes there */
	printf("The last digit of %d ", n);
	if (last_digit > 5)
		printf("is %d and is greater than 5\n", last_digit);
	else if (last_digit == 0)
		printf("is %d and is 0\n", last_digit);
	else
		printf("is %d and is less than 6 and not 0\n", last_digit);
	return (0);
}
