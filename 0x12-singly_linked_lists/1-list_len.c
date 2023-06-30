#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function that returns the length of a list
 * @h: the head of the list
 * Return: returns the size of the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
