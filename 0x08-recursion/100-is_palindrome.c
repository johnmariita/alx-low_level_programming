#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * check_if_palindrome - helper function
 * @s: the string
 * @left: index to help us iterate from the left
 * @right: index to help us iterate from the right
 * Return: returns 1 if palindrome and 0 if not
 */
int check_if_palindrome(char *s, int left, int right)
{
	if (left >= right)
		return (1);
	if (s[left] != s[right])
		return (0);
	return (check_if_palindrome(s, left + 1, right - 1));
}
/**
 * is_palindrome - function that calls the helper function
 * @s: the string
 * Return: returns 1 if palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length == 0)
		return (1);
	return (check_if_palindrome(s, 0, length - 1));
}
