#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes a node at index
 * @head: the head to the list
 * @index: the index at which the node should be deleted
 * Return: returns 1 0r -1 depending on whether ther's an error
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head, *tmp;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	while (ptr)
	{
		if (count == index)
		{
			ptr = ptr->prev;
			tmp = ptr->next;
			ptr->next = tmp->next;
			tmp->next->prev = ptr;
			free(tmp);
			return (1);
		}
		count++;
		ptr = ptr->next;
	}
	return (-1);
}
