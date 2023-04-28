#include <string.h>
#include "lists.h"

/**
 * add_node - function to add a new node at the beginning of a linked list
 * @head: pointer to list_t list
 * @str: the new string added in the node
 * Return: returns a pointer to the  new element,
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *added;

	while (str[len])
		len++;

	added = malloc(sizeof(list_t));
	if (added == NULL)
		return (NULL);

	added->str = strdup(str);
	added->len = len;
	added->next = (*head);
	(*head) = added;

	return (*head);
}

