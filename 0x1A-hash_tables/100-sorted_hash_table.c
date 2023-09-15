#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	shash_table_t *oht = malloc(sizeof(shash_table_t));

	if (oht == NULL)
		return NULL;
	oht->size = size;
	oht->array = malloc(sizeof(shash_node_t *) * size);
	while (i < size)
	{
		oht->array[i] = NULL;
		i++;
	}
	oht->shead = NULL;
	oht->stail = NULL;
	return oht;
}

void get_node(shash_node_t **node, const char *key, const char *value)
{	
	if (*node == NULL)
		return;
	(*node)->key = malloc(strlen(key));
	if ((*node)->key == NULL)
		return;
	(*node)->value = malloc(strlen(value));
	if ((*node)->value == NULL)
		return;
	(*node)->key = strdup(key);
	(*node)->value = strdup(value);
	(*node)->snext = NULL;
	(*node)->sprev = NULL;
	(*node)->next = NULL;
}
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash;	
	shash_node_t *node = malloc(sizeof(shash_node_t)), *tmp, *ptr;

	if (strcmp(key, "") == 0)
		return 0;
	get_node(&node, key, value);
	if (node == NULL || ht == NULL)
		return 0;
	hash = key_index((const unsigned char *)key, ht->size); 
	if (ht->shead == NULL)
	{
		ht->shead = node;
		ht->stail = node;
	}
	else
	{
		ptr = ht->shead;
		while(ptr->snext)
			ptr = ptr->snext;
		ptr->snext = node;
		node->sprev = ptr;
		ht->stail = node;
	}
	if (ht->array[hash] == NULL)
		ht->array[hash] = node;
	else
	{
		if (strcmp(ht->array[hash]->key, key) == 0)
		{
			free(ht->array[hash]->value);
			ht->array[hash]->value = malloc(strlen(value));
			ht->array[hash]->value = strdup(value);
		}
		else
		{
			tmp = ht->array[hash];
			while(tmp->next)
				tmp = tmp->next;
			tmp->next = node;
		}
	}
	return (1);
}

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int hash;
	shash_node_t *ptr;

	if (ht == NULL || strcmp(key, "") == 0)
		return NULL;
	hash = key_index((const unsigned char *)key, ht->size);
	if (strcmp(key, ht->array[hash]->key) == 0)
		return (ht->array[hash]->value);
	else
	{
		ptr = ht->array[hash];
		while (ptr)
		{
			if (strcmp(ptr->key, key) == 0)
				return (ptr->value);
			ptr = ptr->next;
		}
	}
	return (NULL);
}

void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i = 0;
	int first = 0;
	shash_node_t *ptr = 0;

	if (ht == NULL)
		return;	
	printf("{");
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
	printf("}\n");
}

void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int i = 0;
	shash_node_t *ptr, *tmp, *prn = NULL;

	while (i < ht->size)
	{
		if (ht->array[i])
		{
			ptr = ht->array[i];
			tmp = ht->array[i];
			if (prn)
			{
				prn->snext = ptr;
				ptr->sprev = prn;
			}
			while (ptr->next)
			{
				ptr = ptr->next;
				ptr->sprev = tmp;
				tmp->snext = ptr;
				tmp = tmp->next;
			}
			prn = ptr;
		}
		i++;
	}

	if (ht == NULL)
		return;
	i = 0;
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			ptr = ht->array[i];
			break;
		}
		i++;
	}
	while (ptr->snext)
		ptr = ptr->snext;
	while (ptr)
	{
		printf("%s ", ptr->value);
		ptr = ptr->sprev;
	}
	printf("\n");
}
