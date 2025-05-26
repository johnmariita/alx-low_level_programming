#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: 1 for success
 */

int main(void)
{
	char s[] = "and that piece of art is useful\" - \
Dora Korpar, 2015-10-19\n";
	fwrite(s, sizeof(char), strlen(s), stderr);
	return (1);
}
