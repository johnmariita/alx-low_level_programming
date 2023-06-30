#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: the head of the list
 */
void free_list(list_t *head)
{
	list_t *tmp = NULL;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
