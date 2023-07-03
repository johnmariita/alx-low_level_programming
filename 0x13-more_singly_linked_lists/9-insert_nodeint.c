#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function that insert a node at an index
 * @head: the address to the head of the list
 * @idx: the index the node will be inserted at
 * @n: the number to be inserted in the node
 * Return: returns the address of the head to the updated list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *tmp = *head, *new_list;

	if (*head == NULL)
		return (NULL);
	while (tmp)
	{
		if (i == idx - 1)
		{
			new_list = malloc(sizeof(listint_t));
			if (new_list == NULL)
				return (NULL);
			new_list->n = n;
			new_list->next = tmp->next;
			tmp->next = new_list;
			return (*head);
		}
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
