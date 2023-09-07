#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int first = 0;

	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			if (first == 0)
			{
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				first = 1;
			}
			else
				printf(", '%s': '%s'", ht->array[i]->key, ht->array[i]->value);	
		}
		i++;
	}
	printf("}\n");
}
