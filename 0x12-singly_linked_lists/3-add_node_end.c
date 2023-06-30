#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function that adds a node at the end of a list
 * @head: pointer to the head of the list
 * @str: the str to be copied to the string part of the node
 * Return: returns the address to the head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *new_list;

	if (*head == NULL)
	{
		new_list = malloc(sizeof(list_t));
		if (new_list == NULL)
			return (NULL);
		new_list->len = strlen(str);
		new_list->str = strdup(str);
		new_list->next = NULL;
		*head = new_list;
		return (*head);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	new_list = malloc(sizeof(list_t));
	if (new_list == NULL)
		return (NULL);
	new_list->len = strlen(str);
	new_list->str = strdup(str);
	new_list->next = NULL;
	tmp->next = new_list;
	return (*head);
}
