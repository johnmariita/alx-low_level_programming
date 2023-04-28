#include "main.h"
/**
 * _pow_recursion - function to calculate the power of a an integer
 * @x: the integer
 * @y: raised power
 * Return: returns the power
 *
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
