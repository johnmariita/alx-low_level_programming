#include "lists.h"
/**
 * print_list - function to print a linked list
 * @h: pointer to the list structure
 * Return: returns the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
