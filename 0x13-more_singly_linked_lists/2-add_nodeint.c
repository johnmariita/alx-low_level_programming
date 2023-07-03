#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add a node at the beginning of a list
 * @head: pointer to the head of the list
 * @n: the number to be inserted to the list
 * Return: rerurns a pointer to the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = *head;
	listint_t *new_list;

	new_list = malloc(sizeof(listint_t));
	if (!new_list)
		return (NULL);
	new_list->n = n;
	new_list->next = ptr;
	*head = new_list;
	return (*head);
}
