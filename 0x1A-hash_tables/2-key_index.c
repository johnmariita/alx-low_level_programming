#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_code = hash_djb2(key) % size;
	return hash_code;
}
