#include <string.h>
#include "lists.h"

/**
 * add_node_end - function to add a new node at the end of a linked list
 * @head: double pointer to the list structure
 * @str: the string to be added
 * Return: returns a pointer to the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}

