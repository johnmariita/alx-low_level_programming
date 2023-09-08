#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - function that frees a hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *ptr = NULL, *temp = NULL;

	if (ht == NULL)
		return;
	if (ht->array)
	{
		while (i < ht->size)
		{
			ptr = ht->array[i];
			while (ptr)
			{
				temp = ptr;
				ptr = ptr->next;
				free(temp->key);
				free(temp->value);
				free(temp);
			}
			i++;
		}
		free(ht->array);
		free(ht);
	}
}
