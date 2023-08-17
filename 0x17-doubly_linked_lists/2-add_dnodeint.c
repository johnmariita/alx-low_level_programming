#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - function that adds a node at the beginning of a list
 * @head: pointer to the head of the list
 * @n: the integer to be inserted
 * Return: returns a pointer to the head of the list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
		return (*head);
	}
	new_node->next = *head;
	if ((*head)->next)
		(*head)->next->prev = new_node;
	*head = new_node;
	return (*head);
}
