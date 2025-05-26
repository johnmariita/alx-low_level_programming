#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: 1 for success
 */

int main(void)
{
	char s[] = "and that piece of art is useful\" - \
Dora Korpar, 2015-10-19\n";
	write(2, s, 60);
	return (1);
}
