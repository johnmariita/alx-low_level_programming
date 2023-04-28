#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - function to return the number of nodes
 * @h: pointer to the list
 * Return: returns the list count
 */
size_t listint_len(const listint_t *h)
{
	size_t list_count = 0;

	while (h)
	{
		list_count++;
		h = h->next;
	}
	return (list_count);
}
