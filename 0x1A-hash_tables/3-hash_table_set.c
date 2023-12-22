#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the ash table
 * @ht: hash table to update
 * @key: key/index
 * @value: value of key/index
 *
 * Return: 1(Success) 0(Failure)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new_node;

	index = key_index(((const unsigned char *)key), ht->size);
	if (key == NULL || strlen(key) == 0)
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	ht->array[index] = new_node;
	return (1);
}
