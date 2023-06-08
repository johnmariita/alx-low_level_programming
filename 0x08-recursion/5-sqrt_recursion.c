#include <stdio.h>
#include "main.h"

/**
 * get_root  - a helper function to calc the sqrt
 * @num: the number to be sqrt'ed
 * @root: the integer we'll be iterating to get the sqrt
 * Return: returns the root or -1 for error
 */
int get_root(int num, int root)
{
	if (root * root > num)
		return (-1);
	else if (root * root == num)
		return (root);
	else
		return (get_root(num, root + 1));
}
/**
 * _sqrt_recursion - function that will help get to the root
 * @n: the number
 * Return: returns the sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (get_root(n, 0));
}
