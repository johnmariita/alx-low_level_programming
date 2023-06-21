#include "function_pointers.h"

/**
 * print_name - function that prints a name with the help of another function
 * @name: the name to be printed
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
