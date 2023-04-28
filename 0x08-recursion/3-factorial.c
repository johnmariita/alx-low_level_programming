#include "main.h"
/**
 * factorial - function to calc factorial of a number
 * @n: the integer we need to get it's factorial
 * Return: returns the factorial of the integer
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n == 1)
		return (n);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
