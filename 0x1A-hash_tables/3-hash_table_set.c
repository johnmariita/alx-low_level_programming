#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - function that sets aup a hash table
 * @ht: the hash table
 * @key: a key to be inserted to the hash table
 * @value: the value to the key
 * Return: returns 1 on success, 0 on error
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash_code = hash_djb2((unsigned char *) key) % ht->size;
	hash_node_t *item = NULL;
	hash_node_t *ptr = ht->array[hash_code];

	if (ht == NULL)
		return (0);
	if (strcmp(key, "") == 0)
		return (0);
	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);
	item->key = malloc(strlen(key) + 1);
	if (item->key == NULL)
		return (0);
	item->value = strdup(value);
	item->next = NULL;
	strcpy(item->key, key);
	if (ptr)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			free(item->key);
			free(item->value);
			free(item);
			free(ptr->value);
			ptr->value = strdup(value);
			return (1);
		}
		item->next = ptr;
		ht->array[hash_code] = item;
	}
	else
		ht->array[hash_code] = item;
	return (1);
}
