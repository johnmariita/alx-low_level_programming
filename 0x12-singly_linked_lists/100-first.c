#include <stdio.h>

/**
 * print_first - function that prints befor the main func
 */

void print_first(void) __attribute__((constructor));

void print_first(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
