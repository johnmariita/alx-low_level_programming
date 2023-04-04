#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - function to print the nodes
 * @h: pointer to the structure of the linked list
 * Return: returns the count of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int node_count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		node_count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node_count);
}
