#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function to remove the first node of a list
 * @head: pointer to the head of the list
 * Return: returns the number that was contained by the removed node
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);
	tmp = *head;
	n = tmp->n;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
