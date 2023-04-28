#include "main.h"
/**
 * reverse_array - function to reverse an array
 * @a: pointer to the array
 * @n: size of the array
 *
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i = 0;

	for (; i <= n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
