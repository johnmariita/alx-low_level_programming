#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash_code = hash_djb2((unsigned char *) key) % ht->size;
	hash_node_t *item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return 0;
	item->key = malloc(strlen(key) + 1);
	if (item->key == NULL)
		return 0;
	item->value = malloc(strlen(value) + 1);
	if (item->value == NULL)
		return 0;
	strcpy(item->key, key);
	strcpy(item->value, value);
	ht->array[hash_code] = item;
	return 1;
}
