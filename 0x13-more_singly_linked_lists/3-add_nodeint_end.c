#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - function to add a node at the end of a list
 * @head: pointer to the list
 * @n: integer to be stored in the added node
 * Return: returns new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *tmp;

	ptr = *head;
	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;
	if (*head == NULL)
	{
	*head = tmp;
	return (tmp);
	}
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = tmp;
	return (ptr);
}
