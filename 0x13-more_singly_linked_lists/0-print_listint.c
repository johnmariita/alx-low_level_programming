#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint -function that prints the contents of a list
 * @h: the head of the list
 * Return: returns the number of elements in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
