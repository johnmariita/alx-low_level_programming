#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function that removes a node at certain index
 * @head: the head of the list
 * @index: the index of the list
 * Return: returns 1 or -1, depending on the success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head, *ptr;
	u_int64_t i = 0;

	if (*head == NULL)
		return (-1);
	while (tmp)
	{
		if (index == 0)
		{
			(*head) = (*head)->next;
			free(tmp);
			return (1);
		}
		if (i == index - 1 && tmp->next)
		{
			ptr = tmp->next;
			tmp->next = tmp->next->next;
			free(ptr);
			return (1);
		}
		tmp = tmp->next;
		i++;
	}
	return (-1);
}
