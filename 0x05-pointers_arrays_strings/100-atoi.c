#include "main.h"
/**
 *
 *
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;

	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		if (*s == '-')
			sign *= -1;
		if (*s == '+')
			sign *= 1;
		else
			num = 0;
		s++;
	}
	return (sign * num);
}
