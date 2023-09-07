#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - function that returns the index of a key in the hash map
 * @key: the key
 * @size: size of the array
 * Return: returns the index of the key in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_code = hash_djb2(key) % size;

	return (hash_code);
}
