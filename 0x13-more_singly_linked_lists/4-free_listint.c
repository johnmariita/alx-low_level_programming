#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head: the head to the list
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (head == NULL)
		return;
	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
