#include "function_pointers.h"
/**
 * print_name - a function that prints the string
 * @name: string
 * @f: pointer to the function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
