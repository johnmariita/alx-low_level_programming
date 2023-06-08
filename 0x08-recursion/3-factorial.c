#include <stdio.h>
#include "main.h"

/**
 * factorial - function that calculates the factorial
 * @n: the number we're getting the factorial
 * Return: returns the factorial of a number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
