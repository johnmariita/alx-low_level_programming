#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - function to add a node to the end of a list
 * @head: pointer to the head of the list
 * @n: integer to be in the node
 * Return: returns a pointer to the head of the list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = *head;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (ptr->next)
		ptr = ptr->next;
	new_node->prev = ptr;
	ptr->next = new_node;
	return (*head);
}
