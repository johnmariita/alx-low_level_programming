#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - function that returns the value related to a key
 * @ht: the hash table
 * @key: the key whose value we want to obtain
 * Return: returns the value to a key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash_code = hash_djb2((unsigned char *) key) % ht->size;
	hash_node_t *ptr = NULL;

	if (strcmp(key, "") == 0)
		return (NULL);
	if (ht->array[hash_code])
	{
		ptr = ht->array[hash_code];
		while (ptr)
		{
			if (strcmp(ptr->key, key) == 0)
				return (ptr->value);
			ptr = ptr->next;
		}
		return (NULL);
	}
	else
		return (NULL);
}
