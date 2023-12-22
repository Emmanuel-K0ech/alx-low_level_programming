#include "hash_tables.h"
/**
 * hash_table_get - retrieves value assocciated with a key
 * @ht: hash table to looke into
 * @key: key to look for
 *
 * Return: value with element or NULL if value couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;

	index = key_index((const unsigned char *)key, ht->size);
	return (ht->array[index]->value);
}
