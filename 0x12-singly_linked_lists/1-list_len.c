#include "lists.h"

/**
 * list_len - function to return elements in a linked list
 * @h: pointer to the structure of the list
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}

