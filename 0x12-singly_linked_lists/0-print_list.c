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
	const list_t *ptr = h;

	if (h == NULL)
		return (0);
	while (ptr)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (null)\n");
			ptr = ptr->next;
			count++;
			continue;
		}
		printf("[%d] [%s]\n", ptr->len, ptr->str);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
