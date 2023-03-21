#include "dog.h"

int _strlen(char *name)
{
	int count = 0;
	while (name[count] != '\0')
		count++;
	return (count);
}
