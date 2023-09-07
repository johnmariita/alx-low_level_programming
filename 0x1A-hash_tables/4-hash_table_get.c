#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash_code = hash_djb2((unsigned char *) key) % ht->size;
	if (ht->array[hash_code])
		return ht->array[hash_code]->value;
	else
		return NULL;
}
