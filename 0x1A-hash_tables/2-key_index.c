#include "hash_tables.h"
/**
 * key_index - gives you the index of a key
 * @key: key to find index to
 * @size: size of hash table array
 *
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value, index = 0;

	hash_value = hash_djb2(key);
	index = hash_value % size;
	return (index);
}
