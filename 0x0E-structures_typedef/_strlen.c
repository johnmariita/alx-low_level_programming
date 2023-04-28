#include "dog.h"
 /**
 * _strlen - function to get string length
 * @name: string to get the length
 * Return: returns length of string
 */
int _strlen(char *name)
{
        int count = 0;
        while (name[count] != '\0')
                count++;
        return (count);
}

