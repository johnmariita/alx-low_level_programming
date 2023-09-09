#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_print - function that prints the hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int first = 0;
	hash_node_t *ptr = NULL;

	printf("{");
	if (ht)
	{
		while (i < ht->size)
		{
			if (ht->array[i])
			{
				if (first == 0)
				{
					ptr = ht->array[i];
					while (ptr)
					{
						printf("'%s': '%s'", ptr->key, ptr->value);
						ptr = ptr->next;
					}
					first = 1;
				}
				else
				{
					ptr = ht->array[i];
					while (ptr)
					{
						printf(", '%s': '%s'", ptr->key, ptr->value);
						ptr = ptr->next;
					}
				}
			}
			i++;
		}
	}
	printf("}\n");
}
