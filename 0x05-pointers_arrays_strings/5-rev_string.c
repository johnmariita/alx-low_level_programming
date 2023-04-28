#include "main.h"
/**
 * rev_string - a function that reverses  ATRING
 *
 * @s: string is passed here
 */
void rev_string(char *s)
{
	int i = 0, length = 0;
	char temp;

	while (s[length] != '\0')
		length++;
	for (i = length - 1; i >= length / 2; i--)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
