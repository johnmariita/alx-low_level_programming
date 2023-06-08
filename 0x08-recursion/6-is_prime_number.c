#include <stdio.h>
#include "main.h"

/**
 * is_prime_helper - function to get if_prime recursively
 * @n: the number
 * @i: the divisor
 * Return: retuens 1 if prime and 0 elsewhere
 */
int is_prime_helper(int n, int i)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - function that calls the recursive function
 * @n: the nnumber
 * Return: returns 1 if prime and 0 elsewhere
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
