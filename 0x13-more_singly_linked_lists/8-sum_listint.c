#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - function to sum the values in a list
 * @head: the head of the list
 * Return: returns the sum of the values in a list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
