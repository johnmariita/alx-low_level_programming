#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - function that returns the length of a list
 * @h: pointer to the head of the list
 * Return: returns the count of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *ptr = h;

	if (!h)
		return (0);
	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
