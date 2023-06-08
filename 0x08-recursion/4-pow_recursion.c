#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - function to calculate the power
 * @x: the base
 * @y: the exponent
 * Return: returns the power
 */
int _pow_recursion(int x, int y)
{
	if(y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y-1));
}
