#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - function that reverses a linked list
 * @head: address to the head of the list
 * Return: returns the address of the head of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *curr = *head;
	listint_t *nxt = NULL;

	while (curr)
	{
		nxt = curr->next;
		curr->next = prev;
		prev = curr;
		curr = nxt;
	}
	(*head) = prev;
	return (*head);
}
