#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (*head == NULL)
		return;
	while (*head)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
	free(*head);
	*head = NULL;
}
