#include "lists.h"

/**
 * free_list - function to free a linked list
 * @head: list to be free
 */
void free_list(list_t *head)
{
	list_t *lsfree;

	while (head)
	{
		lsfree = head->next;
		free(head->str);
		free(head);
		head = lsfree;
	}
}

