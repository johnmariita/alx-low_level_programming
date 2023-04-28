#include  <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - function to add a node at the beginning of the list
 * @head: pointer to the list
 * @n: integer to initialize the n variable in the new node
 * Return: returns address of the node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (0);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
