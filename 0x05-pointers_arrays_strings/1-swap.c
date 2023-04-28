#include "main.h"
/**
 * swap_int - function that swaps two integers
 *
 * @a: first integer
 *
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
