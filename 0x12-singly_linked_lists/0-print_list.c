#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - function that prints the contents of a list
 * @h: the head of the list
 * Return: returns the count of the nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (null)\n");
			h = h->next;
			count++;
			continue;
		}
		printf("[%d] [%s]\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
