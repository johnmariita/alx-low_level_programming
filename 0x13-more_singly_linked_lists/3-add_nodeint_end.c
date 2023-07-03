#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - function to add a node at the end of the list
 * @head: the head of the list
 * @n: the number to be inserted
 * Return: returns a pointer to the head of the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = *head;
	listint_t *new_list;

	if (*head == NULL)
	{
		new_list = malloc(sizeof(listint_t));
		if (new_list == NULL)
			return (NULL);
		new_list->n = 4;
		new_list->next = NULL;
		*head = new_list;
		return (*head);
	}
	while (ptr->next)
	{
		ptr = ptr->next;
	}
	new_list = malloc(sizeof(listint_t));
	if (new_list == NULL)
		return (NULL);
	new_list->n = n;
	new_list->next = NULL;
	ptr->next = new_list;
	return (*head);
}
