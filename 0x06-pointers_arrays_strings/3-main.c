#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[] = "Hello";
<<<<<<< HEAD
    char s2[] = "World!";
=======
    char s2[] = "World";
>>>>>>> f1c46be0c536ce5cbd45b33d7586eeed4041613b

    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
    return (0);
}
