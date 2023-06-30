#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds a node at the beggining of a list
 * @head: a pointer to the head of the list
 * @str: the string to be added to the string part pf the node
 * Return: returns a pointer to the head of the list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *new_list;

	tmp = *head;
	new_list = malloc(sizeof(list_t));
	if (new_list == NULL)
		return (NULL);
	new_list->len = strlen(str);
	new_list->str = strdup(str);
	new_list->next = tmp;
	*head = new_list;
	return (*head);
}
