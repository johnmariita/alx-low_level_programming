#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - function that frees a list
 * @head: the head to the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;

	if (ptr == NULL)
		return;
	while (ptr)
	{
		head = head->next;
		free(ptr);
		ptr = head;
	}
}
