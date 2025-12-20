#include "hash_tables.h"

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	/* Get the hash value using djb2 */
	hash = hash_djb2(key);
	return (hash % size);
}
