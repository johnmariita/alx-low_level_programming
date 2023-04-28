#include "main.h"
/**
 * _abs - function that returns the absolute value
 * of a number
 *
 * @num: the number to be checked is passed to this parameter
 *
 * Return: returns the absolute value of a number
 */
int _abs(int num)
{
	if (num < 0)
		return (-num);
	else
		return (num);
}
