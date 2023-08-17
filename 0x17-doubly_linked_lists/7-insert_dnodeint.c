#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a node at index
 * @h: pointer to the head of the list
 * @idx: the index to insert the node at
 * @n: the integer to be in the node
 * Return: returns the updated list's head
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = *h;
	dlistint_t *new_node;
	unsigned int count = 0;

	if (ptr == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	while (ptr->next && count <= idx)
	{
		if (count == idx - 1)
		{
			new_node->next = ptr->next;
			new_node->prev = ptr;
			ptr->next->prev = new_node;
			ptr->next = new_node;
			return (*h);
		}
		count++;
		ptr = ptr->next;
	}
	return (NULL);
}
